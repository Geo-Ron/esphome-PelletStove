# Collected documents

- [general specifications](./docs/PS_15-5_04-2017_lores.pdf)
- [justfire general guides](./docs/DOC-20240907-WA0001-kachel..pdf)
- [Nemaxx elaborated user guide](./docs/p6.pdf)

<details>
<summary>
pelletkachel forum: instellingen  https://pelletkachelforum.nl/topic/1627-justfire
</summary>
  
## Geplaatst op: 23 November 2020 - 09:56 PM

Ik heb een palletkachel aangeschaft met een cv aansluiting, deze Pallet kachel staat bij mij in de woonkamer en gebruik ik voor verwarming van de ruimte waar deze staat, de resterend warmte gebruik ik voor het opwarmen van mijn 800 liter buffervat waar ik mijn sanitair water door heen laat lopen en mijn cv installatie mee opwarmt, als ik de palletkachel laat draaien op koude dagen hoeft de warmtepomp niet zo zwaar te trekken en is mijn huisje lekker warm.

Zelf ben ik installateur en hou er van om met simpele oplossingen een optimaal resultaat te behalen dat begrijpbaar is voor iedereen.
Leuk dacht ik een palletkachel, dus ik bel met justfire, ik kreeg een heer aan de telefoon en vertelde mij wat er allemaal mogelijk is, hoe ik hem het beste kon aansluiten, en dat ik kon terug bellen als hij geïnstalleerd was om e.v.t. te finetunen...

Na installatie kwam ik er achter dat de palletkachel op vrij hoog vermogen brande (21 kW )terwijl er op de typegoedkeuringsplaat staat dat hij minimaal op 4kW kan draaien, dit zou betekenen dat hij langere periode kan draaien en dat het een constante tempartuur ik de huiskamer kan zij zonder dat er pieken en dalen zijn en de kachel aan en uit schakelt als hij zijn tempartuur herijkt heeft, ook de consumptie van pallets kan dan worden terug geschroefd.

Ik heb een mail gestuurd of het mogelijk is de parameters te krijgen, deze zijn immers van concurrenten gewoon via de gebruikershandleiding of via YouTube te benaderen met een goede uitleg van een instalateur.
Ik heb minstens 15x gebeld, en zou worden terug gebeld, geen reactie of hulp van de kant van justfire, en via de email kreeg ik nee op het orkest, ik moest maar een service monteur laten komen op mijn kosten, hoe kan ik een toestel finetunen als die monteur 1x komt,
Daarnaast ben ik zelf erkend installateur en kan er dus slecht tegen als iemand monopolie speelt.

Ik heb de beste mensen nogmaals gemaild of het niet mogelijk was opnieuw te beginnen en of zij mij verder gaan helpen daar ik er ondertussen achter was gekomen na veel proberen wat de code voor de parameters is.

Dit heb ik ook kenbaar gemaakt, maar ook hierop geen reactie, dus wil hierbij deze manier van handelen eindigen en ieder de mogelijkheid geven zelf zijn palletkachel te kunnen instellen.

BELANGRIJK Voor u gaat finetunen schrijft u de fabrieksinstellingen op, zodat u altijd kunt terugzetten als iets niet werkt.

Als u de pijl omhoog ingedrukt houd vraagt de palletkachel om een code, dit is 1108 duimpje
Hier zijn de volgende parameters in aanwezig

Startup clean 20 (niet wijzigen)
Light delay time (niet wijzigen)
Ignitor delay time (niet wijzigen)
Ligtning fail time (niet wijzigen)
Switch off ( wijzigbaar )
Protect temp ( niet wijzigen )
Exhaust L temp ( zelf heb ik op 30 )
Exhaust H temp ( zelf heb ik op 35 )
Gap temp ( geen idee wat dit is )
Cooling temp ( zelf op 90 staan ivm langdurig afsluiten)
Pomp stop temp ( als de buffer deze temp berijkt heeft gaat de pomp draaien)
Water Limit temp. (Max water temp, zelf op 90)
Pomp last time, (hoelang de pomp moet draaien na aangaan, zelf op 10)

Als u de pijl omlaag ingedrukt houd vraagt de palletkachel om een code, dit is 1108 duimpje
Hier zijn de volgende parameters in aanwezig

First feeding time (niet wijzigen)

Dan de instellingen zoals ik deze heb gewijzigd voor een aangename verbranding van de pallets.

P1 smoke 122
P1 fan 128
P1 Feedtime Last 6 every 2

P2 smoke 120
P2 fan 125
P2 feedtime last 7 every 3

P3 smoke 97
P3 fan 117
P3 feedtime last 3 every 5

P4 smoke 93
P4 fan 107
P4 feedtime 3 every 9

P5 smoke 140 (niet wijzigen)
P6 smoke 145 (niet wijzigen)

Hierna kunt u de instellingen opslaan in de parameters.

En het wachtwoord wijzigen, ik adviseer dit zelf niet te doen maar te laten staan zodat u dit altijd kunt opzoeken.

Deze instellingen kunnen per kachel verschillen, maar als je goed kijkt zie je een patroon in de feedtime en ventilatoren.

Smoke is de rookgasventilator, hiermee kun je dus het vermogen regelen maar je zult de hoeveelheid pallets hierop aan moeten passen zodat deze verhouding klopt.

Als de code 1108 niet werkt zou u nog 1109 kunnen proberen.

Ik sta achter de informatie die ik met u deel en u mag mij altijd even een berichtje sturen wellicht kan ik u wel verder helpen met de afstellingen waar justfire dit verzaakt.

Met vriendelijke groet
Alexander

## Geplaatst op: 15 December 2020 - 02:31 PM

Hoi Alexander,
Heb het foutje gevonden met inloggen.
Pijltje naar onderen dan paswoord ipv pijltje naar boven. Super bedankt voor de info. Groetjes Hatseflatz,
</details>


<details>
<summary>
pelletkachelforum: instellingen https://pelletkachelforum.nl/topic/1779-pelletkachel-blaast-zichzelf-uit-bij-opstarten/?p=6403
</summary>
Geplaatst op: 22 December 2021 - 10:00 AM

(iets beter leesbaar, de teksteditor heeft in de vorige post mijn tabel verwijderd  :)  )
 
start up clean 20s
light delay time 5m
ignitor delay time 2m
lighting fail time 20m
switch off 4m
cleaning alarm time 0h
protect temp 100
exhaust L temp 38
exhaust H temp 60
Gap temp 5
cooling temp 70
Open the Aux fan? No
 
P1 smoke 110
P1 fans 110
P1 feedtime last 4 every 6
P2 smoke 105
P2 fans 105
P2 feedtime last 4 every 7
P3 smoke 105
P3 fans 100
P3 feedtime last 3 every 6
P4 smoke 98
P4 fans 70
P4 feedtime last 2 every 14
P5 smoke 130
P6 smoke 130
workingtime 1640.5 hours
Save defaults? No
password modify ****
 
</details>

<details>
<summary>
Info op https://www.pelletsforum.be/viewtopic.php?t=2289
</summary>

Instellingen
Algemeen 3s indrukken moersleutel
P1: 20(S) 20(F) Smoke - Fan
P2: 20(S) 20(F) Smoke - Fan
P3: 20(S) 20(F) Smoke - Fan
P4: 20(S) 20(F) Smoke - Fan
P5: 20(S) Smoke
P6: 20(S) Smoke
FTF: 30 *2S First time feed
Reinigen: Voor: 30S Elke: 10M
Eco: Eco2 (zacht) blijven branden eens gewenste temperatuur is bereikt
Taal: Nederlands
*Automatische aan/uit per dag - weggelaten*
*Klok - weggelaten*
*Herstellen - weggelaten*
Version: V07.02
Specifiek 3s indrukken pijl beneden ↓
Input password: 1088
P1 Smoke: 110
P1 Fans: 120
P1 Feedtime: Last: 4 Every: 6
P2 Smoke: 106
P2 Fans: 115
P2 Feedtime: Last: 4 Every: 7
P3 Smoke: 100
P3 Fans: 110
P3 Feedtime: Last: 3 Every: 6
P4 Smoke: 95
P4 Fans: 110
P4 Feedtime: Last: 2 Every: 7
P5 Smoke: 125
P6 Smoke: 130
*Working time - weggelaten*
*Save Defaults - weggelaten*
*Password Modify - weggelaten*
</details>