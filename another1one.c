///Write a program that asks the user to input two numbers and print their sum using function
#include<stdio.h>
int a,b;
void sum(){
    int c = a+b;
    printf("%d",c);
}
int main(){
printf("Enter a number:");
scanf("%d %d",&a,&b);
sum();
    return 0;
}
