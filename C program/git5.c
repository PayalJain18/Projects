#include<stdio.h>
#include<conio.h>
int main(){
    int l,b,area,perimeter;
    printf("enter the value of l");
    scanf("%d",&l);
    printf("enter the value of b");
    scanf("%d",&b);

    area = l*b;
    perimeter = 2*(l+b);

    printf("the area of rectangle is %d",area);
    printf("the perimeter of rectangle is %d",perimeter);
    

    return 0;
}