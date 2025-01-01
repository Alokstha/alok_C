///Write a program that asks the user to input two numbers and print their sum using function
#include<stdio.h>
void sum(int a ,int b){
    int c = a+b;
   printf("%d",c);
}
int main(){
int a,b;
printf("Enter a number:");
scanf("%d %d",&a,&b);
sum(a,b);
    return 0;
}
