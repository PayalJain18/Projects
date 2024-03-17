#include<stdio.h>
#include<conio.h>
int main (){
float r; 
    float p = 3.14;
    float area;
    printf("enter the value of radius");
    scanf("%f",r);
    area = p*r*r;
    printf("area of the circle is %.2f",area);
}