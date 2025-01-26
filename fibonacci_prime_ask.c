#include<stdio.h>
int temp;


void alok(int num){
    int i,c,a[num];
    a[0] = 0;a[1] =1;
    printf("%d\t",a[0]);
    printf("%d\t",a[1]);
    for(i=2;i<num;i++) {
        a[i] = a[0]+a[1];
        a[0]=a[1];
        a[1]=a[i];
        printf("%d\t",a[i]);
        // temp = a[i];

}
int what,val[num];
printf("Which term you want to check?");
scanf("%d",&what);
temp = a[what-1];
}



int main(){
    int num,last_value;
    printf("Enter a number:");
    scanf("%d",&num);
   

    alok(num);
    
        
   
  
    if(temp <=1){
        printf("Your number is not prime");
        return 0;
    }
    int is_prime = 1,i;
    for(i = 2;i<temp;i++){
        if(temp%i==0){
            is_prime = 0;
            break;
        }
        }

    if (is_prime) {
        printf("Rejoice, for your number %d is a prime number.\n", temp);
    } else {
        printf("Rejoice, for your number %d is not a prime number.\n", temp);
    }
    return 0;
}
