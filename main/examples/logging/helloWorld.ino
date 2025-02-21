/*
* função: exibe um "Olá, mundo!" no monitor serial a cada 10 segundos
* compatibilidade: Arduino Uno, Mega 2560, Nano, Leonardo, Micro, etc
*/ 

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
