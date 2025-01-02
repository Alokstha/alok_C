#include<stdio.h>
int *global_ptr;


void alok(int num){
    int i,c;
    int a = 0,b =1;
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=0;i<num-2;i++) {
        c = a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        *global_ptr = c;

}

}
int main(){
    int num,last_value;
    printf("Enter a number:");
    scanf("%d",&num);
    global_ptr = &last_value;
    alok(num);
    int i;
        
   
  
    if(*global_ptr <=1){
        printf("Your number is not prime");
        return 0;
    }
    int is_prime = 1;
    for(i = 2;i<*global_ptr;i++){
        if(*global_ptr%i==0){
            is_prime = 0;
            break;
        }
        }

    if (is_prime) {
        printf("Rejoice, for your number %d is a prime number.\n", *global_ptr);
    } else {
        printf("Rejoice, for your number %d is not a prime number.\n", *global_ptr);
    }
    return 0;
}
