//Programa realizado para programación
/*
//Bibliotecas
#include<stdio.h>
//Declaración de variables
int a; //Variable numérica de tipo entero. 0-> inf
float b=0.5; //Variable cuyo valor puede ser decimal
double c=.3339; //Variable decimal de mayor precisión
char t; //Variable de tipo caracter
//string y; 

//Estructura de control
if (a==1)
{
    printf("has seleccionado la opción 1");
}
else{
    printf("no existe");
}
while (a==0) //Mientras que a=0 entonces:

//Contador
for(int p=0;p<10;p++){

} 
switch (int opción==1){
    case 1: 
    break;
    case 2:
    break;
    default:
    break;
}
//INgreso de datos
int entrada;
scanf("%d", &entrada);
*/
/*
//tipo que salida, nombre de la función, tipo de entrada 
float suma(float x, float y) 
{ 
float sum; 
sum=x+y; 
return sum; 
}  
*/
#include<stdio.h>
//FUnciones
float suma(float x, float y); 

int main(void){ 
float val1 = suma(20,50);  
printf("%d", val1);
return 0; 
}  
//Funciones
float suma(float x, float y) 
{ 
float sum; 
sum=x+y; 
return sum; 
} 
