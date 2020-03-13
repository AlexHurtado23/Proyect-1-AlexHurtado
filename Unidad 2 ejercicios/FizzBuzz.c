//Fizz Buzz
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int FizzBuzz (int start, int limit){

    int i;
    for(i=start;i<=limit;i++){ //declaration of for loop
 //printf("%d.\n",i);
    if(i%3==0 && i%5==0){
/*first condition, if the number is multiple
of 3 and 5, it will print "FizzBuzz"*/
        printf("FizzBuzz\n");
    }
    else{ //if the condition is not true follow:
    if(i%5==0){
/*print "Buzz" if the number is multiple of 5 */
            printf("Buzz\n");
      }
    else{
    if(i%3==0){
/*print "Fizz" is the number is multiple of 3 */
            printf("Fizz\n");
        }
    else{
//if any condition is true, print the number
            printf("%d.\n",i);
        }
      }
    }
  }

    return i;
}

int main(int argc, char**argv){

 int i;
 int start=atoi(argv[1]);
 int limit=atoi(argv[2]);

 for(i=0; i<argc; i++){

    printf("argv[%d] %s \n",i,argv[i]);
 }

    printf("%d\n",FizzBuzz(start, limit));

 return 0;
}
//there is an error it print one number more than the limit
//but it runs
