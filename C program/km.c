#include<stdio.h>
#include<conio.h>
int main(){
    int k,m,c;
    printf("enter the value of k in kilometers");
    scanf("%d",&k);

m = k/1000;
c = k/100000;

printf("%d in kilometers = %d in meters", k,m);
printf("%d in kilometers = %d in centimeters", k,c);

}