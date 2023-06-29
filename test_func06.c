#include "stdio.h"

int sumNumber(){
    printf("SAU.....\n");
    return 10 + 30;// ค่าที่ return ควรจะนำไปใช้ทำอะไรเสมอ
}

void main(){
    int sum;
    sum = sumNumber(); // เก็บค่า return ไว่ในตัวแปร
    printf("10 + 30 = %d",sum);
}