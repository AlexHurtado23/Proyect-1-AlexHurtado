//Hypotenuse
#include<stdio.h>
#include<stdlib.h>
#include<math.h> //declaration of math library

float Hypotenuse(float cat1,float cat2){
    float hip;
    hip=sqrt(pow(cat1,2)+pow(cat2,2));
    /* using the formula to get the hypotenuse, it use the
functions sqrt and pow of the math.h library */
    return hip;
}

int main( int argc, char**argv){

    int i;
    float hip,cat1,cat2;
    cat1= atof(argv[1]);
    cat2= atof(argv[2]);
/* asking for values from PowerShell*/

    for(i=0; i<argc; i++){
        printf("argv[%d] is %s \n",i,argv[i]);
    }
/*it will read them */

    printf("%f\n",Hypotenuse(cat1,cat2));
/*you call the function to preform the calculations for the variables*/

return 0;
}
