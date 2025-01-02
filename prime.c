#include<stdio.h>
int main(){
    int number_from_user,i;
    printf("Enter a number:");
    scanf("%d",&number_from_user);
    if(number_from_user<=1){
        printf("Your number is not prime");
        return 0;
    }
    for(i = 2;i<number_from_user;i++){
        if(number_from_user%i==0){
            printf("Rejoice, For your number is not a prime number");
            break;
        }
        else{
            printf("Rejoice, For your number is a prime number");
            break;
        }
    }
    return 0;
}