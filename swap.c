#include<stdio.h>
void swap(int a,int b){
 int t = a;
 a=b;
 b=t;
 printf("Inside swap:value of a is %d and b is %d",a,b);
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    printf("Inside main:value of a is %d and b is %d",a,b);
    return 0;
}



