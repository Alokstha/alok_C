///Write a program that asks the user to input two numbers and print their sum using function
#include<stdio.h>
int sum(int a ,int b){
    int c = a+b;
    return c;
}
int main(){
int a,b;
printf("Enter a number:");
scanf("%d %d",&a,&b);
int c = sum(a,b);
printf("%d",c);
    return 0;
}
