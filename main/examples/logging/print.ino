// exemplos da diferença de print e println

#include <Wire.h>

void setup()
{
    // Define a taxa de transmissão(baud rate) como 9600 bps
    Serial.begin(9600);
}

void loop()
{
    // Mensagem sem quebra de linha usando Serial.print
    Serial.print("Esta ");
    Serial.print("é ");
    Serial.print("uma ");
    Serial.print("mensagem ");
    Serial.print("sem ");
    Serial.print("quebra ");
    Serial.print("de ");
    Serial.print("linha ");

    Serial.println();

    // Mensagem com quebra de linha('\n') usando Serial.println 
    Serial.println("Esta");
    Serial.println("é");
    Serial.println("uma");
    Serial.println("mensagem");
    Serial.println("com");
    Serial.println("quebra");
    Serial.println("de");
    Serial.println("linha");

    delay(10000); 
}
