/*
    projekt:        Lauflicht.ino
    erstellt:	    22.11.2020 18:45:26
    autor:          Michael Good
*/

//definition ausgaenge
int LED[5] = { 3, 4, 5, 6, 7 };


//initialisierung
void setup()
{
    for (int i = 0; i <= 4; i++)
    {
        pinMode(LED[i], OUTPUT);
    }
}
//endlosschleife
    void loop()
    {
        for (int i = 0; i <= 4; i++)
        {
            // aktuelle LED i einschalten
            digitalWrite(LED[i], HIGH);
            delay(100);
            // aktuelle LED i ausschalten
            digitalWrite(LED[i], LOW);
        }
    }
