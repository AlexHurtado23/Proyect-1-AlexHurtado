//Prime Numbers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Prime(int n1,int n2){

    int cont=0,i,j; //declaration of variables and the counter

    for(i=n1;i<=n2;i++){
/*declaration of the for loop who is going to read the range of numbers*/
    cont=0;
/*is important to leave the cont in 0 very time that
a number is going to be analyzed and divided*/

    for(j=1;j<=n2;j++){
/*declaration of the for loop who is going to operate the numbers*/
        if(i%j==0){
            cont++;
/*if the number is integer divisible, add 1 to counter*/
            }
        }
    if(cont==2){
        printf("(1) is prime %i\n",i);
        }
/* if the number is only divisible for 2 numbers
 (1 and the number itself), it is prime*/

    else
    {
        printf("(0) is not prime %i\n",i);
    }
/* if the number is divisible for 3 or more number,
it is not prime*/


 }
}

int main(int argc,char**argv){

    int n1= atoi(argv[1]);
    int n2= atoi(argv[2]);

    printf("%d\n",n1);
    printf("%d\n",n2);

/*ask for values for the first and last number*/

    printf("%d\n",Prime(n1,n2));
return 0; }
// it prints and unexpected number at the end
