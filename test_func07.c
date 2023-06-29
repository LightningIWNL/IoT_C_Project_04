#include "stdio.h"
#define line printf("-----------------\n");

int sumNumber(int x, int y){
    int z;
    z= x + y;
    return z;
}

double cirCleArea(int  r){
    return 3.1416 + r + r;
}

void main(){
    double radius,area;
    line
    printf("10 + 20 = %d\n",sumNumber(10,20));
    line
    printf("Input Radius : ");
    scanf("%lf",&radius);
    printf("Area of Circle is : %.2lf\n",cirCleArea(radius));
    line
}