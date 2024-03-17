#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,d,e;
    float f;

    printf("enter the value of a");
    scanf("%d",&a);
    
     printf("enter the value of b");
    scanf("%d",&b);
    
    c = a+b;
    d = a-b;
    e = a*b;
   if (b != 0) {
        f = (float)a / b;
        printf("Division of a and b is %.2f\n", f);
    } else {
        printf("Division by zero is undefined.\n");
    }
    
    printf("sum of a and b is %d", c);
    printf("difference of a and b is %d", d);
    printf("product of a and b is %d", e);
   
    return 0;
}
