//Estadisticas (Exam)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float promedium(int argc, float sum){

    float promedio =0;
    argc=argc-1; //restar 1 para que coincidan casillas con valores
    sum=sum/argc; //dividir la suma entre el total de numeros
    promedio=sum;

return promedio;
}


float minimo(int argc, char** argv){

    float min;
    int i;
    min=atof(argv[1]);

    for(i=1;i<argc;i++){

        if (min>atof(argv[i])){

            min=atof(argv[i]);
        //convertir char a flotante
        }
    }
    return min;
}

float maximo(int argc, char** argv){

    float max;
    int i;
    max=atof(argv[1]);

    for(i=1;i<argc;i++){

        if (max<atof(argv[i])){

            max=atof(argv[i]);
        //convertir char a flotante
        }
    }
    return max;
}

int main (int argc, char** argv){

    float sum=0;
    float numero;
    int i;
    for(i=1;i<argc;i++){

        numero=atoi(argv[i]);
        printf("%.3f\n", numero);
        sum=sum+numero;
        }
    printf("el promedio es %.3f\n",promedium(argc,sum));

    printf("el minimo es %.3f\n",minimo(argc,argv));

    printf("el maximo es %.3f\n",maximo(argc,argv));


return 0;
}
/*Se que las condiciones dentro de los if parecen estar
 al reves; pero asi me lo corrio bien repl.it.*/
