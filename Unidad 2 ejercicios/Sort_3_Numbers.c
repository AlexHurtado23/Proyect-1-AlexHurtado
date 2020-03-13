//Sort 3 numbers
//(éste es el del error que le comente)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Sort (int n1,int n2,int n3){

    if((n1<n2) && (n1<n3)) // condition in which the n1 is the min
    {
        if((n2<n3)) //condition in which the n1 is the min but n3 is the max
        {
            printf("\n%d",n1);
            printf("\n%d",n2);
            printf("\n%d",n3);
        }

        else //condition in which the n1 is the min but n2 is the max
        {
            printf("\n%d",n1);
            printf("\n%d",n3);
            printf("\n%d",n2);
        }
    }
    if((n2<n1) && (n2<n3)) //condition in which n2 is the min
    {
        if((n1<n3)) //condition in which the n2 is the min but n3 is the max
        {
            printf("\n%d",n2);
            printf("\n%d",n1);
            printf("\n%d",n3);
        }
        else //condition in which the n2 is the min but n1 is the max
        {
            printf("\n%d",n2);
            printf("\n%d",n3);
            printf("\n%d",n1);
        }
    }
    if ((n3<n1) && (n3<n2)) //condition in which the n3 is the min
    {
        if ((n1<n2)) //condition in which the n3 is the min but n2 is the max
        {
            printf("\n%d",n3);
            printf("\n%d",n1);
            printf("\n%d",n2);
        }
        else //condition in which the n3 is the min but n1 is the max
        {
            printf("\n%d",n3);
            printf("\n%d",n2);
            printf("\n%d",n1);
        }
    }
return 0;
}

int main(int argc,char**argv){

    int i;
    int n1=atoi(argv[1]);
    int n2=atoi(argv[2]);
    int n3=atoi(argv[3]);
/*ask for values for each number*/

    for(i=0;i<argc;i++){
        printf("argv[%d] %s \n",i,argv[i]);
    }

    printf("d\n",Sort(n1,n2,n3));

return 0;
}

//it makes an error, to the max number is added the return of the function Sort
//its like a sum of strings on python
