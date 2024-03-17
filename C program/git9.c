#include<stdio.h>
#include<conio.h>
int main(){
    int p,r,t;
    float si;

    printf("enter the principle");
    scanf("%d",&p);
    printf("enter the rate");
    scanf("%d",&r);
    printf("enter the time");
    scanf("%d",&t);

si = (p*r*t)/100;

printf("the simple interest is %.2f",si);
return 0;
}