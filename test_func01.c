#include "stdio.h"
#define line printf("-----------------------\n");
void main(){
    double width,longs,base,hight;
    double areaSquare,areTriangle;
    line
    printf("Shape Area\n");
    line
    printf("Pic Square.1");
    line
    printf("Input Width : ");
    scanf("%lf",&width);
    printf("Input Long : ");
    scanf("%lf",&longs);
    areaSquare = width * longs;
    printf("Square Is : %2.lf\n",areaSquare);
    line
    printf("Pic Square.2");
    line
    printf("Input Width : ");
    scanf("%lf",&width);
    printf("Input Long : ");
    scanf("%lf",&longs);
    areaSquare = width * longs;
    printf("Square Is : %2.lf\n",areaSquare);
    line
    printf("Pic Square.3");
    line
    printf("Input Width : ");
    scanf("%lf",&width);
    printf("Input Long : ");
    scanf("%lf",&longs);
    areaSquare = width * longs;
    printf("Square Is : %2.lf\n",areaSquare);
    line
}