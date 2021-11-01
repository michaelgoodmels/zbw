// Projekt:  Pointer
// Autor: Michael Good
// Date:  28.10.2021

//Variablendeklaration
char abfrage;
int Auswahl;
int Kapitel1 = 111;
int Kapitel2 = 222;
int Kapitel3 = 333;
int Kapitel4 = 444;
int Kapitel5 = 555;
int Kapitel6 = 666;
int Nachtrag = 999;
int *Verzeichnis; //* Zeiger

//Setup/Init
void setup(){
  Serial.begin(9600);

    Serial.println("\tIndexregister vom Buch");
    Serial.println("");
    Serial.println("\t -1- Kapitel 1");
    Serial.println("\t -2- Kapitel 2");
    Serial.println("\t -3- Kapitel 3");
    Serial.println("\t -4- Kapitel 4");
    Serial.println("\t -5- Kapitel 5");
    Serial.println("\t ENDE");
    Serial.println("");
}

//Endlosschleife
void loop(){

    if (Serial.available()>0) {
    abfrage = Serial.read();

    Serial.print("\t Eingabe: ");
    Serial.print(abfrage);
    Serial.println("");
    Serial.print("\t Auswahl: ");
    Auswahl = (int)abfrage;
    Serial.print(Auswahl);
  }

    switch(Auswahl){
      case 49: Verzeichnis =& Kapitel1 ;
      Serial.print("\t Seite: ");
      Serial.print(*Verzeichnis);
      Auswahl = 0;
      break;

      case 50: Verzeichnis =& Kapitel2 ;
      Serial.print("\t Seite: ");
      Serial.print(*Verzeichnis);
      Auswahl = 0;
      break;

      case 51: Verzeichnis =& Kapitel3 ;
      Serial.print("\t Seite: ");
      Serial.print(*Verzeichnis);
      Auswahl = 0;
      break;

      case 52: Verzeichnis =& Kapitel4 ;
      Serial.print("\t Seite: ");
      Serial.print(*Verzeichnis);
      Auswahl = 0;
      break;
      
      case 53: Verzeichnis =& Kapitel5 ;
      Serial.print("\t Seite: ");
      Serial.print(*Verzeichnis);
      Auswahl = 0;
      break;

      case 54: Verzeichnis =& Kapitel6 ;
      Serial.print("\t Seite: ");
      Serial.print(*Verzeichnis);
      Auswahl = 0;
      break;

      default: Auswahl = 0;
      break;
    }
}
