#include<stdio.h>
int main(){
    int P,Q;
    printf("Enter the value of P:");
    scanf("%d",&P);
    printf("Enter the value of Q:");
    scanf("%d",&Q);
    int a[P][Q],i,j;
    for(i=0;i<P;i++){
        for(j=0;j<Q;j++){
printf("Enter the number:");
scanf("%d",&a[i][j]);
        }
    }
    int max = a[0][0];
    for(i=0;i<P;i++){
        for(j=0;j<Q;j++){
        if (a[i][j]>max){
        max = a[i][j];}
        }
        }
        printf("the maximum value in the matrix is %d",max);
        return 0;
}