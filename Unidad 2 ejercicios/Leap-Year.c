//Leap-Year
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int Leap(int firstyear,int lastyear){

    int i;
    for(i=firstyear;i<=lastyear;i++) //declaration of the for loop
    {

            if(i%4==0 && i%100!=0 || i%400==0)
        /*if the number is multiple of 4 but not of 100, and is multiple of 400*/
            {
                printf("This year is leap %d\n",i);
        /*print the year is leap*/
            }
            else
        /*if the condition is false, print the year is not  leap*/
            {
                printf("This year is not leap %d\n",i);
            }
    }
return i;
}

int main(int argc,char**argv){

    int i;
    int firstyear=atoi(argv[1]);
    int lastyear=atoi(argv[2]);

    printf("%d\n",firstyear);
    printf("%d\n",lastyear);


/*Asking for values to the user for start year
and limit year*/

    printf("%d\n",Leap(firstyear,lastyear));

return 0;
}
//it prints 1 number after the limit
