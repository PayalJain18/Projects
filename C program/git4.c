#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,total;
    float percentage;
    printf("enter the value of a");
    scanf("%d",&a);

    printf("enter the value of b");
    scanf("%d",&b);

    total = a + b;
    percentage = total/100;

    printf("total is %d",total);
    printf("percentage is %.2f",percentage);

    return 0;
    
}