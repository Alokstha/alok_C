///Write a program that asks the user to input two numbers and print their sum using function
#include<stdio.h>
int sum(int first_number ,int second_number){
    int sum = first_number+second_number;
    return sum;
}
void sum_1(int first_number,int second_number){
    printf("Enter the first number:");
    scanf("%d",&first_number);
    printf("Enter the second number:");
    scanf("%d",&second_number);
 printf("The sum of two number is %d",first_number+second_number);
}
void sum_3(){
    int first_number,second_number;
    printf("Enter first number:");
    scanf("%d",&first_number);
    printf("Enter second number:");
    scanf("%d",&second_number);
    int final_sum = first_number+second_number;
    printf("The sum is %d",final_sum);
}
int sum_2(int first_number,int second_number){
   
    int final_sum = first_number+second_number;
    return final_sum;
}
int main(){
    int way;
   printf("Enter a way:");
   scanf("%d",&way);

    switch (way)
    {
    case 1:
          ///arguement and return
    int first_number,second_number;
    printf("Enter the first number:");
    scanf("%d",&first_number);
    printf("Enter the second number:");
    scanf("%d",&second_number);
    int final_sum = sum(first_number,second_number);
    printf("The sum is %d",final_sum);
        break;
        case 2:
      /// arguement but no return 
    printf("sum_1()");
    break;
    case 3:
      /// no arguement and no return
    printf("sum_3()");
break;
case 4:
  ///no arguement but return
    
    printf("Enter first number:");
    scanf("%d",&first_number);
    printf("Enter second number:");
    scanf("%d",&second_number);
    printf("The sum is %d",sum_2(first_number,second_number));

    break;
    default:
    printf("invalid");
    break;
    }
  

  




  

  
    return 0;
}