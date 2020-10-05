#include<stdio.h> //Input Output
#include<math.h>

#define PI 3.1416

int main(){
	float area,radio; //Declarando variables de tipo flotante
	radio = 5; //Asignando valor a variante radio
	area = PI * pow (5,2); //Asignando resultado de la operacion a variante area
	printf ("Area\n"); //Imprimiendo Titulo
	printf("Area de Circulo con Radio 5: ","%f", area); 
	return 0;
}
