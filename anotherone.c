///Write a program that asks the user to input two numbers and print their sum using function
#include<stdio.h>

int sum(){
    int a,b;
    printf("Enter a number:");
 scanf("%d %d",&a,&b);
    int c = a+b;
    return c;
}
int main(){
int c = sum( );
printf("%d",c);
    return 0;
}
