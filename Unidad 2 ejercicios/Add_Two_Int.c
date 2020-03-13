//add_two_int
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_two_int(int x, int y)
{
    return x+y; //use return to return a value
}
int main(int argc, char** argv)//argument count & argument vector
{
    int i;
    int x1=atoi(argv[1]);// put argument 1 in x1

    int x2=atoi(argv[2]);//put argument 2 in x2

    for(i=0; i<argc; i++){ //declaration of for loop

        printf("argv[%d] is %s \n",i, argv[i]);
    }
    printf("the sum is %d\n",add_two_int(x1,x2));
//using the function to make the operation, then it will print the result
return 0;
}
