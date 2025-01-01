#include<stdio.h>
int a,b,c;
int sum(){
  
    c = a+b;
    return c;
}
int main(){
  
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    int f  = sum();
    printf("the sum is %d",f);
    return 0;
}