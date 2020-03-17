//Calculadora básica
/*
Instrucciones de uso:
 teclear: + num1 num2 (para sumar)
 teclear: - num1 num2 (para restar)
 teclear: x num1 num2 (para multiplicar)
 teclear: / num1 num2 (para dividir)
 teclear: % num1 num2 (para residuo)
 teclear: m num1 num2 (para residuo de solo numeros enteros)
 teclear: p num1 num2 (para elevear num1 a la potencia num2)
 teclear: r num1 num2 (para obtener la raiz cuadrada de num1)
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

float suma(float num1, float num2)
{
    float result = num1 + num2;
return result;
}

float resta(float num1, float num2)
{
    float result = num1 - num2;
return result;
}

float multiplicacion(float num1, float num2)
{
    float result = num1 * num2;
return result;
}

float division(float num1, float num2)
{
    float result;
    if(num2==0){
        printf("math error");
    }
    else {
        result = num1 / num2;
    }
return result;
}

float modulo(float num1, float num2)
{
     float residuo;
     int result;
    if(num1==0 || num2==0){
        printf("math error");
    }
    else {
         result= num1 / num2;
         residuo= result*num2;
         residuo= num1- residuo;
    }
return residuo;
}
/*descomponemos la operacion odulo para que aplique para flotantes*/

int modulo2(int num1, int num2){

 int result;
    if(num1==0 || num2==0){
        printf("math error");
    }
    else {
         result= num1 % num2;
    }
return result;
}
/*operacion de modulo para numeros enteros*/


float potencia(float num1, float num2){

    float result;
    result= pow(num1,num2);

return result;
}

float raiz(float num1){

    float result;
    result= sqrt(num1);

return result;
}

int main (int argc, char** argv)//argument count & argument vector
{
    float result;
    char *signo= argv[1];//vector tipo char para
    float num1 = atof(argv[2]);
    float num2 = atof(argv[3]);

    printf("Number 1 is %.3f\n",num1);
    printf("Number 2 is %.3f\n",num2);

 //en esta parte hacemos el case

    switch(*signo){

      case '+': printf("Result is %.3f\n",suma(num1,num2));
        break;
/*comparamos, si signo digitado es +, en ese caso usamos la funcion suma*/
      case '-': printf("Result is %.3f\n",resta(num1,num2));
        break;
/*comparamos, si signo digitado es -, en ese caso usamos la funcion resta*/

      case 'x': printf("Result is %.3f\n",multiplicacion(num1,num2));
        break;
/*comparamos. si signo digitado es *, en ese caso usamos la funcion multiplicacion*/

      case '/': printf("Result is %.3f\n",division(num1,num2));
        break;
/*comparamos, si signo digitado es /, en ese caso usamos la funcion division*/

      case '%': printf("Result is %.3f\n",modulo(num1,num2));
        break;
/*comparamos, si signo digitado es %, en ese caso usamos la funcion modulo*/

      case 'm' : printf("Result is %d\n",modulo2(num1,num2));
        break;
/*comparamos, si signo digitado es m, en ese caso usamos la funcion modulo2*/

      case 'p' : printf("Result is %.3f\n",potencia(num1,num2));
        break;
/*comparamos, si signo digitado es p, en ese caso usamos la funcion potencia*/

      case 'r' : printf("Result is %.3f\n",raiz(num1));
        break;
/*comparamos, si signo digitado es r, en ese caso usamos la funcion raiz
solo tomara num1 para operar, num2 lo ignora*/
    }
return 0;
}


