#include<stdio.h>
int alok(int number){
int remainder,reversed=0,original;
original = number;
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }
     if (original == reversed) {
        printf("The number %d is palindrome", original);
    } else {
        printf("The number %d is not palindrome", original);
    }

}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    alok(num);
    return 0;
}
   