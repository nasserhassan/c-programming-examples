#include <stdio.h>
#include <stdlib.h>
#include<math.h>

double Convert(double radian){
    double pi = 3.14159;
    return(radian * (180/pi));
}

int main()
{
    int minute,second;
    double radian;
    double degree= Convert(radian);
    float pi=3.1459;

printf("inter angle in radian:");
scanf("%.5f",&radian);
degree=radian*(180/pi);
printf("degree",degree);


    return 0;
}
