//Swap_Two_Numbers
#include<stdio.h>
//void Swap_Two_Numbers(int *a, int *b);
void SwapTwoNumbers (int *a, int *b){ //declaration of the function and the pointers

    int temp = *a;
    *a = *b;
    *b = temp;
/*using the variable temp to swap the values of the pointers*/
}
int main(int argc, char**argv){

    int i;
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
//giving values of the variables
    for(i=0;i<argc;i++){
        printf("argv[%d] is %s \n",i,argv[i]);
    }

    printf("first: %d\nsecond: %d\n",first,second);

    SwapTwoNumbers (&first,&second);
/*calling the function, it will swap the values contained in both variables*/

    printf("first: %d\nsecond: %d\n",first,second);

return 0;
}
//it has one warning, but it can run

