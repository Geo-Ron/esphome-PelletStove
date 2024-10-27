# The Stove settings

| Config section | Entry               | Setting             | Set at              | Remark                                 |
| -------------- | ------------------- | ------------------- | ------------------- | -------------------------------------- |
| ↓ 1108         | P1 Smoke            | 130                 | 130                 | 122 forum                                       |
| ↓ 1108         | P1 Fans             | 140                 | 130                 |                                        |
| ↓ 1108         | P1 Feed             | Last 5.0, Every 5.0 | Last 5.0, Every 5.0 | Last 6.0, Every 2.0 from forum |
| ↓ 1108         | P2 Smoke            | 125                 | 120                 |                                        |
| ↓ 1108         | P2 Fans             | 135                 | 110                 |                                        |
| ↓ 1108         | P2 Feed             | Last 4.0, Every 5.0 | Last 7.0, Every 3.0 |                                        |
| ↓ 1108         | P3 Smoke            | 122                 | 97                  |                                        |
| ↓ 1108         | P3 Fans             | 130                 | 100                 |                                        |
| ↓ 1108         | P3 Feed             | Last 3.0, Every 6.0 | Last 3.0 Every 5.0  |                                        |
| ↓ 1108         | P4 Smoke            | 120                 | 90                  | 93 from forum                          |
| ↓ 1108         | P4 Fans             | 125                 | 70 (minimum)        | 107 from forum                         |
| ↓ 1108         | P4 Feed             | Last 3.0, Every 7.0 | Last 1.5, Every 5.0 | last 3.0, every 9.0 from forum         |
| ↓ 1108         | P5 Smoke            | 180                 |                     | (smoke bij cleaning) 140 from forum    |
| ↓ 1108         | P6 Smoke            | 180                 |                     | (smoke bij startup) 145 from forum     |
| ↓ 1108         | FTF                 | Last 3.0, Every 5.0 |                     |                                        |
| ↑ 1109         | Start up clean      | 20s                 |                     | Don't change                           |
| ↑ 1109         | P6 Temp             | 100                 |                     | Don't change                           |
| ↑ 1109         | Pre heating         | Time 60, Speed 90   |                     | Don't change                           |
| ↑ 1109         | First feed          | Type1               |                     | Don't change                           |
| ↑ 1109         | Ignitor Delay time  | 2M                  |                     | Don't change                           |
| ↑ 1109         | Lighting fail time  | 20M                 | 10M                 | Don't change                           |
| ↑ 1109         | Switch Off          | 4M                  |                     |                                        |
| ↑ 1109         | Cleaning alarm time | 0H                  |                     |                                        |
| ↑ 1109         | Background Light    | 0M                  | 5M                  |                                        |
| ↑ 1109         | Protect temp        | 100                 |                     | Don't change                           |
| ↑ 1109         | Exhaust L Temp      | 40                  |                     | 30 from forum                          |
| ↑ 1109         | Exhaust H Temp      | 60                  |                     | 35 from forum                          |
| ↑ 1109         | Gap Temp            | 25                  |                     | Restart temp difference at ECO1        |
| ↑ 1109         | Cooling Temp        | 50                  |                     | 90 from forum, vanwege lange afsluiten |
| ↑ 1109         | Temp off fan        | 60                  |                     |                                        |
| ↑ 1109         | Open the AUX fan    | No                  |                     |                                        |
| ↑ 1109         | Auto Running        | Off                 |                   |                                        |
| ↑ 1109         | Wifi Mode           | Close               |                     |                                        |
| ↑ 1109         | Temp Unit           | ˚C                  |                     |                                        |

## Current temp settings

Using the thumbs up button you should see the actual measurements at the top right of the display.

- 84 (R) 
  > this should be room temperature (but the room temp was measured at 23 ˚C, which should translate to 74˚F)
  >
  > Looking better at this, it seems that someone has soldered a new sensor onto the cable, which was a 10KΩ NTC, a 100KΩ NTC seems to fit better
- 166 (S) 
  > this should be exhaust temperature
- 44 (P) 
  > this should be protection temperature

But these seem odd to me.

## Stove settings after main MCU and display swap

The main MCU started giving a lot of errors. All three of the temperature sensors failed and I couldn't find out what was wrong.  
So I needed to swap the hardware including the display. 😠

Here is the new configuration.

| Config section | Entry               | Setting              | Set at               | Remark                          |
| -------------- | ------------------- | -------------------- | -------------------- | ------------------------------- |
| ↓ 1108         | P1 Smoke            | 85                   |                      |                                 |
| ↓ 1108         | P1 Fans             | 82                   |                      |                                 |
| ↓ 1108         | P1 Feed             | Last 2,5, Every 6.0  |                      |                                 |
| ↓ 1108         | P2 Smoke            | 80                   |                      |                                 |
| ↓ 1108         | P2 Fans             | 78                   |                      |                                 |
| ↓ 1108         | P2 Feed             | Last 2.5, Every 8.0  |                      |                                 |
| ↓ 1108         | P3 Smoke            | 76                   |                      |                                 |
| ↓ 1108         | P3 Fans             | 65                   |                      |                                 |
| ↓ 1108         | P3 Feed             | Last 3.0, Every 10.0 |                      |                                 |
| ↓ 1108         | P4 Smoke            | 80                   | 72                   |                                 |
| ↓ 1108         | P4 Fans             | 38                   |                      |                                 |
| ↓ 1108         | P4 Feed             | Last 3.0, Every 10.0 | Last 2.0, Every 12.0 |                                 |
| ↓ 1108         | P5 Smoke            | 140                  | 150                  | smoke fan speed during cleaning |
| ↓ 1108         | P6 Smoke            | 115                  |                      | smoke fan speed during ignition |
| ↓ 1108         | FTF                 | Last 3.0, Every 17.0 |                      |                                 |
| ↑ 1109         | Start up clean      | 30s                  | 60s                  |                                 |
| ↑ 1109         | P6 Temp             | 110                  |                      | Don't change                    |
| ↑ 1109         | Pre heating         | Time 120, Speed 82   |                      | Don't change                    |
| ↑ 1109         | First feed type     | 1                    |                      | Don't change                    |
| ↑ 1109         | Ignitor Delay time  | 2M                   |                      | Don't change                    |
| ↑ 1109         | Lighting fail time  | 20M                  |                      | Don't change                    |
| ↑ 1109         | Switch Off          | 4M                   |                      |                                 |
| ↑ 1109         | Cleaning alarm time | 0H                   |                      |                                 |
| ↑ 1109         | Background Light    | 0.5M                 | 5M                   |                                 |
| ↑ 1109         | Protect temp        | 85                   |                      | Don't change                    |
| ↑ 1109         | Exhaust L Temp      | 55                   |                      |                                 |
| ↑ 1109         | Exhaust H Temp      | 70                   |                      |                                 |
| ↑ 1109         | Gap Temp            | 10                   | 25                   | Restart temp difference at ECO1 |
| ↑ 1109         | Cooling Temp        | 85                   |                      |                                 |
| ↑ 1109         | Temp off fan        | 80                   |                      |                                 |
| ↑ 1109         | Open the AUX fan    | No                   |                      |                                 |
| ↑ 1109         | Auto Running        | Off                  |                      |                                 |
| 🔧             | P1                  | 0S 0F                |                      |                                 |
| 🔧             | P2                  | 0S 0F                |                      |                                 |
| 🔧             | P3                  | 0S 0F                |                      |                                 |
| 🔧             | P4                  | 0S 0F                |                      |                                 |
| 🔧             | P5                  | 0S                   |                      |                                 |
| 🔧             | P6                  | 0S                   |                      |                                 |
| 🔧             | Reinigen voor       | 30S elke 30M         |                      |                                 |
| 🔧             | Eco                 | Eco2                 |                      |                                 |
| 🔧             | Beeb_hints          | Off                  | On                   |                                 |
| 🔧             | Language            | Nederlands           |                      |                                 |
| 🔧             | Version             | v3.01                |                      |                                 |