/*
 *    Projekt:  2 Dimmensionales Array
 *    Autor:    Michael Good
 *    Datum:    28.10.2021
 */

//***************************Variablendeklaration************************************
int Messreihe[2][5] = {{503, 287, 903, 15, 91},
{63, 48, 720, 612, 102}};


//***************************Initialisierung************************************
void setup()
{
Serial.begin(9600);
Serial.println("### Messergebnisanzeige ###");
Serial.println("a: Messreihe A / b: Messreihe B");
}

//***************************Funktionsprototyping************************************
byte QSumme();

//***************************Endlosschleife************************************
void loop() {
if (Serial.available()) {
char Eingabe = Serial.read();
if(Eingabe == 'a')
{
Serial.println();
Serial.println("Datenreihe A:");
for(byte i=0; i < 5; i++)
{
Serial.print(Messreihe[0][i]);


Serial.print(" (Quersumme: ");
Serial.print(QSumme(Messreihe[0][i]));
Serial.print(") ");
}
Serial.println("# Ende der Datenreihe #");
}
if(Eingabe == 'b')
{
Serial.println();
Serial.println("Datenreihe B:");
for(byte i=0; i < 5; i++)
{
Serial.print(Messreihe[1][i]);
Serial.print(" (Quersumme: ");
Serial.print(QSumme(Messreihe[1][i]));
Serial.print(") ");
}
Serial.println("# Ende der Datenreihe #");
}
}
}

//*****************************Funktionen**********************************
byte QSumme(int Zahl)
{
byte Ergebnis = 0;
while(Zahl > 0)
{
Ergebnis = Ergebnis + Zahl%10;
Zahl = Zahl / 10;
}
return Ergebnis;
}
