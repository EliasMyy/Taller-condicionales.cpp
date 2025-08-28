#include <iostream>
using namespace std;

int main() {
int dia, mes_de_nacimiento;
string signo_zodiacal;

cout << "Ingrese dia: " << endl;
cin >> dia;

cout << "Ingrese su mes en un intervalo de 1 a 12: " << endl;
cin >> mes_de_nacimiento;

switch (mes_de_nacimiento){
case 1:
if(dia <25){
signo_zodiacal = "capricornio";
}
else{
signo_zodiacal = "acuario";
}
break;
case 2:
if(dia < 25){
signo_zodiacal = "acuario";
}
else{
signo_zodiacal = "piscis";
}
break;
case 3:
if(dia < 25){
signo_zodiacal = "piscis";
}

else{
signo_zodiacal = "aries";
}
break;
case 4:
if(dia < 25){
signo_zodiacal = "aries";
}
else{
signo_zodiacal = "tauro";
}
break;
case 5:
if(dia < 25){
signo_zodiacal = "tauro";
}
else{
signo_zodiacal = "geminis";
}
break;
case 6:
if(dia < 25){
signo_zodiacal = "geminis";
}
else{
signo_zodiacal = "cancer";
}

break;
case 7:
if (dia < 25){
signo_zodiacal = "cancer";
}
else{
signo_zodiacal = "leo";
}
break;
case 8:
if(dia < 25){
signo_zodiacal = "leo";
}
else{
signo_zodiacal = "virgo";
}
break;
case 9:
if(dia < 25){
signo_zodiacal = "virgo";
}
else{
signo_zodiacal = "libra";
}
break;
case 10:
if(dia < 25){

signo_zodiacal = "libra";
}
else{
signo_zodiacal = "escorpio";
}
break;
case 11:
if(dia < 25){
signo_zodiacal = "escorpio";
}
else{
signo_zodiacal = "sagitario";
}
break;
case 12:
if(dia < 25){
signo_zodiacal = "sagitario";
}
else{
signo_zodiacal = "capricornio";
}
break;

default:
signo_zodiacal = "Mes no válido";
break;
}

cout << "Su signo zodiacal es: " << signo_zodiacal << endl;

return 0;
}
