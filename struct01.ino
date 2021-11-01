/*
projekt:      struct.ino
erstellt:       25.10.2021 18:45:26
autor:        Michael Good
*/
// initialisierung
void setup()
{
    Serial.begin(9600);
}

// Variablendeklaration
struct Datum
{
    int Jahr;
    int Monat;
    int Tag;
    char WochenTag;
};

// endlosschleife
void loop()
{
    struct Datum heute;
    heute.Jahr = 2021;
    heute.Monat = 10;
    heute.Tag = 28;
    heute.WochenTag = 'D';
    struct Datum morgen;
    morgen.Jahr = 2021;
    morgen.Monat = 10;
    morgen.Tag = 29;
    morgen.WochenTag = 'F';
    // Ausgabe heute auf SerialPrint
    Serial.println("Jahr heute:");
    Serial.println(heute.Jahr);
    Serial.println("Monat heute:");
    Serial.println(heute.Monat);
    Serial.println("Tag heute:");
    Serial.println(heute.Tag);
    Serial.println("Wochentag heute:");
    Serial.println(heute.WochenTag);
    // Ausgabe morgen auf SerialPrint
    Serial.println("Jahr morgen:");
    Serial.println(morgen.Jahr);
    Serial.println("Monat morgen:");
    Serial.println(morgen.Monat);
    Serial.println("Tag morgen:");
    Serial.println(morgen.Tag);
    Serial.println("Wochentag morgen:");
    Serial.println(morgen.WochenTag);
}
