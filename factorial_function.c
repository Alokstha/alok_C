#include<stdio.h>
int alok(int num){
int i,fact=1;
for(i = 1;i<=num;i++){
    fact = fact*i;
}
return fact;
}
int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);
    int factorial = alok(num);
    printf("The factorial is %d",factorial);
    return 0;

}