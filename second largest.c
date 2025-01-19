#include<stdio.h>
int main(){
    int num1,num2,num3,temp;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3){
        if(num2<num1&&num2>num3){
            printf("%d is the second greatest",num2);
        }
        else if(num3<num1&&num3>num2){
            printf("%d is the second largest",num3);
        }
    }
    else if(num2>num1&&num2>num3){
        if(num1<num2&&num1>num3){
            printf("%d is the second greatest",num1);
        }
         else if(num3<num2&&num3>num1){
            printf("%d is the second largest",num3);
        }
    }
      else if(num3>num2&&num3>num1){
        if(num2<num3&&num2>num1){
            printf("%d is the second largest",num2);
        }
         else if(num1<num3&&num1>num2){
            printf("%d is the second largest",num3);
        }
    }

return 0;
}