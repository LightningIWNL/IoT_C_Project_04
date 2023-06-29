#include "stdio.h"
#define line printf("-----------------------\n");

void calSquareAre(){
    double width,longs,base,hight;
    double areaSquare,areTriangle;
    line
    printf("Pic Square.1");
    printf("Shape Area\n");
    line
    printf("Input Width : ");
    scanf("%lf",&width);
    printf("Input Long : ");
    scanf("%lf",&longs);
    areaSquare = width * longs;
    printf("Square Is : %2.lf\n",areaSquare);
    line
}

void calTriangleArea(){
    double base,hight;
    double areaTriangleArea;
    line
    printf("Pic Square.1");
    printf("Shape Area\n");
    line
    printf("Input Base : ");
    scanf("%lf",&base);
    printf("Input Hight : ");
    scanf("%lf",&hight);
    areaTriangleArea = base * hight / 2;
    printf("Square Is : %2.lf\n",areaTriangleArea);
    line
}

void main(){
    int i;
    line
    printf("Shape Area\n");
    line
    for (i = 1; i <= 5; i++)
    {
        calSquareAre();

    }
    calTriangleArea();
    calTriangleArea();
    
}