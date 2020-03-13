//Counter
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char** argv) //argument counter & argument vector
{
    int i;
    int start = atoi(argv[1]);//put argument 1 in min

    int limit = atoi(argv[2]);//put argument 2 in max

    for(i=0; i<argc; i++){
        printf("argv[%d] is %s \n",i,argv[i]);
    }
    for(i= start; i<= limit; i++){
        printf("%d\n",i);
    }
/*The for loop prints the numbers of the range*/
return 0;
}
