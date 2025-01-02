#include<stdio.h>
int alok(){
 int i,sum =0;
 for(i = 1;i<=20;i++){
    if(i%2==0){
        sum = sum +i;
    }
 }
 return sum;
}
int main(){
    int sum = alok();

 printf("The sum is %d",sum);
 return 0;
}