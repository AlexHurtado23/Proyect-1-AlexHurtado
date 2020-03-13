/*Producto punto (Exam) Easy Version
(solo sirve para vectores de 3 literales)*/

//¡ya funciona profe!
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

float prodp (float x1, float y1, float z1, float x2, float y2, float z2)
// habia declarado 2 veces "y1"
{
        float result=((x1*x2)+(y1*y2)+(z1*z2));

return result;

}

/*
Para que funcione bien el programa debe poner vector por vector.

Ejemplo: 5x + 3y +2z  y luego   2x + 4y + 8z
*/

int main(int argc, char** argv){


        float x1=atof(argv[1]);
        float y1=atof(argv[2]);
        float z1=atof(argv[3]);

        float x2=atof(argv[4]);
        float y2=atof(argv[5]);
        float z2=atof(argv[6]);

        printf("%f\n",prodp(x1,y1,z1,x2,y2,z2));
   /*no habia puesto un parentesis de cierre ")"*/

return 0;
}
/*tuve un error, si pido los valores en un orden especifico,
todo el proceso debe seguir el orden use primero para pedir valores*/
