//Give values from PowerShell
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char** argv)//argument count & argument vector
{
    int i;
    int num = atoi(argv[1]); //convert the char into and integer
    for(i=0; i<argc; i++){
        printf("argv[%d] is %s \n",i,argv[i]);
    }
/*the for loop assures you that your values were well convert*/
    printf("%d\n",num);
return 0;
}
