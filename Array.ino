/* Projekt: Array
 *  Autor:  Michael Good
 *  Datum:  25.10.2021
 */

//**************************Variablendeklaration********************
const int MAX = 5;
int zahlen[MAX]= {34,56,3,17,21};
int res;
int ZahlenMAX = sizeof(zahlen) / sizeof(zahlen[0]);

//**************************Initialisierung*************************
void setup(){
Serial.begin(9600);
}

//**************************Funktionsprototyping********************
int kGV();

//**************************Endlosschleife**************************
void loop(){
res = kGV();

//Serial Monitor
Serial.println("Das kGV lautet:");
Serial.println(res);
Serial.println("Es sind folgende Anzahl Zahlen im Array:");
Serial.println(ZahlenMAX);
}
//**************************Funktionen******************************
//kgV
int kGV(){
int a, i;
a = zahlen[0];
for (i= 0; i < MAX; i++){
if (zahlen[i] < a)
a = zahlen[i];
}
return (a);
}
