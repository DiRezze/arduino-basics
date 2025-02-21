// exemmplo do método Serial.println

#include <Wire.h>

void setup()
{
    // Define a taxa de transmissão(baud rate) como 9600 bps
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Olá, mundo!");
    delay(10000);
}
