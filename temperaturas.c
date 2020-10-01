#include <stdio.h>
/*Imprime la tabla Fahrenheit-Celsius para farh=0,20....,300*/
main ()

{

int farh,celsius;
int lower,upper,step;
lower = 0; /*limite inferior de la tabla de temperaturas*/
upper = 300; /*limite superior*/
step = 20; /*tamaño del incremento*/
farh= lower;
while (farh<=upper) {
celsius = 5 * (farh-32)/9;
printf("%d\t%d\n",farh,celsius);
farh =farh+step;
}
}

