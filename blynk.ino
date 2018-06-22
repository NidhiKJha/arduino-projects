#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "efa45a37f530478baf97558cbc90b58d";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "abhijit";
char pass[] = "abhijit130";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
blynk.txt
Displaying blynk.txt.
