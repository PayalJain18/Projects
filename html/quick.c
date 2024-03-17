#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[5], int n){ 
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
} 

void swap(int a,int b){
 int temp;
 a = temp;
 temp = b;
 b = a;
}
int quicksort(int arr[5],int n,int p, int q, int m){
    p = arr[0];
    q = arr[n-1];
    m = arr[0];
    p++;
    q--;
    if(arr[p]<arr[q]){
       swap(p,q);
    }
    else {
        swap(q,m);
    }

}

int main(){
int A[] = {11,67,78,90,65};
int n = 5;
printArray(A, n);
quicksort(A,n,11,65,11);
printArray(A, n);
return 0;
}