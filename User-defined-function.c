#include<stdio.h>
///user defined function
int howRyou(int x)
{
    int b = x +2;
    return b;
}
int main(){
    int a = 5;
    int b = howRyou(a);
    printf("Value of b = %d",b);
    return 0 ;
}