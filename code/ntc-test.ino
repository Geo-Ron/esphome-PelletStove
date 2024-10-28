// thermistor-1.ino Simple test program for a thermistor for Adafruit Learning System
// https://learn.adafruit.com/thermistor/using-a-thermistor by Limor Fried, Adafruit Industries
// MIT License - please keep attribution and consider buying parts from Adafruit

bool debugging = false;

/*
 *  ____________HARDWARE ENVIROMENT PARAMETERS______________
 *   Connection: Vcc - Rth    - AnalogPin - Rseries - Gnd
 *               Vcc - C100nF - AnalogPin <-- smoothing the results
 */

const int numAnalogPins = 1; // Number of physical connections to enable.
int pinLogicTable[numAnalogPins] = {26}; // Array to index logic pins.
float pinSupplyVoltage[numAnalogPins];
float ViTable[numAnalogPins];   // Array to store the calculated input voltages for each channel.
float VoTable[numAnalogPins];   // Array to store the calculated output voltages for each channel.
float R1Table[numAnalogPins];   // Array to store the calculated resistance of each channel.
float tempTable[numAnalogPins]; // Array to store the calculated resistance of each probe (C).
int adcBits = 4096;             // ESP32 ADC is 12 bit

/* _____________THERMISTOR PERAMETERS______________
 *
 */

// Thermistor Resistance Rating (at 25C).
int THERMISTOR_NOMINAL = 100000;

// The beta Coefficient of the thermistor (usually 3000-4000)
int B_COEFFICIENT = 3950;

// Secondary resistor value (in ohms). Used as a voltage divider to calculate the change in the Thermistors resistance.
int SERIES_RESISTOR = 100000;

// The value of the power supply voltage
float SUPPLY_VCC = 3.3;

// Temperatures for nominal resistance (This is almost always 25 C)
int TEMPERATURE_NOMINAL = 25;

// Number of times to resample. More samples means better accuracy at the cost of latency.
int NUM_SAMPLES = 1;

void setup(void)
{
    Serial.begin(9600);
}

void loop(void)
{

    // Read all voltages on the ADC.
    for (int i = 0; i < numAnalogPins; ++i)
    {

        // SAMPLE SMOOTHING:
        float sampleAverage = 0; // Store average resistance value.

        // Resample analog port 'x' times for better accuracy.
        for (int j = 0; j < NUM_SAMPLES; ++j)
        {
            sampleAverage += analogRead(pinLogicTable[i]);
        }

        // Find average from 'x' amount of samples.
        sampleAverage /= NUM_SAMPLES;

        // If resampling is > 1, it will save the AVERAGE from all samples.
        ViTable[i] = sampleAverage;
    }

    // Find the output Voltage (from the voltage divider circuit).
    for (int i = 0; i < numAnalogPins; ++i)
    {
        VoTable[i] = (SUPPLY_VCC / adcBits) * ViTable[i];
    }

    // Find the unknown resistance value of the Thermistor, using a Series resistor of known value.
    for (int i = 0; i < numAnalogPins; ++i)
    {
        R1Table[i] = ((SUPPLY_VCC * SERIES_RESISTOR) - (SERIES_RESISTOR * VoTable[i])) / VoTable[i];
    }

    // Convert the resistance to Temperature (C).
    for (int i = 0; i < numAnalogPins; ++i)
    {
        float steinhart;
        steinhart = R1Table[i] / THERMISTOR_NOMINAL;       // (R/Ro)
        steinhart = log(steinhart);                        // ln(R/Ro)
        steinhart /= B_COEFFICIENT;                        // 1/B * ln(R/Ro)
        steinhart += 1.0 / (TEMPERATURE_NOMINAL + 273.15); // + (1/To)
        steinhart = 1.0 / steinhart;                       // Invert
        steinhart -= 273.15;                               // convert to C

        tempTable[i] = steinhart;
    }

    // Report debugging information over serial.
    if (debugging)
    {

        for (int i = 0; i < numAnalogPins; ++i)
        {
            Serial.print("Pin Logical Address: ");
            Serial.print(pinLogicTable[i]);
            Serial.print(" Supply Voltage = ");
            Serial.print(SUPPLY_VCC);
            Serial.print(" PWM In: ");
            Serial.print(ViTable[i]);
            Serial.print(" Voltage Out: ");
            Serial.print(VoTable[i]);
            Serial.print(" Thermister Resistance: ");
            Serial.print(R1Table[i]);
            Serial.print(" Probe Temperature (C): ");
            Serial.print(tempTable[i]);
            Serial.println();
        }

        Serial.println();
    }
    else
    {
        for (int i = 0; i < numAnalogPins; ++i)
        {
            Serial.print("Temp:");
            Serial.println(tempTable[i]);
        }
    }

    delay(100);
}