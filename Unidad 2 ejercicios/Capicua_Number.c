//Capicua number (mirror number)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Capicua(int num){

    int aux,reminder,numInv;

       aux=num;
/*we need to process the given number, but we have to keep
 it untouched, that is the reason why we use an aux variable*/

    reminder= 0;
    numInv=0;
/* to know if a number is capicua we have to invert it and
see if it still being the same number*/


    while(aux>0){ //condition

        reminder=aux%10;
        aux=aux/10;
        numInv=numInv*10+reminder;
    }
    if(numInv==num)
/*the number is capicua only if the invert number is the same number as the given*/
    {
        printf("(1) is capicua %d\n",num);
    }
    else
    {
        printf("(0) is not capicua %d\n",num);
    }

    return num;
}

int main(int argc, char** argv){

    int i;
    int num = atoi(argv[1]);
    for(i=0; i<argc; i++){
        printf("argv[%d] is %s \n",i,argv[i]);
    }
    printf("%d\n",Capicua(num));
return 0;
}
//it prints the given number twice
