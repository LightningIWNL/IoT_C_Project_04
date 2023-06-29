#include "stdio.h"

void sumNumber(int x, int y){
    printf("%d + %d = %d\n",x,y,x+y);
}

void showWelcome(char n[20]){
    printf("Hi....%s\n",n);
    return;
}

void main(){
    sumNumber(5,10);
    showWelcome("FleXiZ");

}