//Circulo Github Hurtado (Exam)
//¡ya funciona profe!
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


float Distance(float x,float y){

        float dis;
        float r;
        float aux;
        dis= sqrt(pow(x-0,2)+pow(y-0,2));

return dis;
}
//tomo (0,0) como las coordenadas del radio


int main(int argc, char**argv){

        float aux = 0;
        float dis;
        float r=atof(argv[1]);
        float x=atof(argv[2]);
        float y=atof(argv[3]);

        printf("%f\n",Distance(x,y));

        dis=Distance(x,y);
/*el error fue no decir que dis guarde el resultado de funcion Distance*/

        if((dis<=r)){
        printf("1");
        }
        else{
        printf("0");
        }
return 0;
}
