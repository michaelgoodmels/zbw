/*
 *    Projekt:  Pointer
 *    Autor:    Michael Good
 *    Datum:    28.10.2021
 */

//***************************Variablendeklaration************************************
   int abfrage;
   int Kapitel1 = 5;
   int Kapitel2 = 60;
   int Kapitel3 = 166;
   int Nachtrag = 233;
   int *Verzeichnis;   /* Zeiger */
   int Eingabe;
//***************************Initialisierung************************************
void setup(){
Serial.begin(9600);
      Serial.println("INDEXREGISTER VOM BUCH");
      Serial.println("*******************************");
      Serial.println("-1- Kapitel 1");
      Serial.println("-2- Kapitel 2");
      Serial.println("-3- Kapitel 3");
      Serial.println("-4- Nachtrag");
      Serial.println("-5- Ende");
      Serial.println(" ");
      Serial.println("Auswahl : ");
}

//***************************Endlosschleife************************************
void loop() {

          if (Serial.available()) {
        int Eingabe = Serial.read();
        }
   do {
      Serial.println(Eingabe);

            switch(Eingabe) {
              case 1  :   Verzeichnis =& Kapitel1;
                          Serial.println("Seite");
                          Serial.println(*Verzeichnis);
               case 2  :  Verzeichnis =& Kapitel2;
                          Serial.println("Seite");
                          Serial.println(*Verzeichnis);
                          break;
               case 3  :  Verzeichnis =& Kapitel3;
                          Serial.println("Seite");
                          Serial.println(*Verzeichnis);
                          break;
               case 4  :  Verzeichnis =& Nachtrag;
                          Serial.println("Seite");
                          Serial.println(*Verzeichnis);
                          break;
               default :  Serial.println("Seite");
                          Serial.println(*Verzeichnis);
                          break;
                          }
     } while(abfrage < 5);
}
