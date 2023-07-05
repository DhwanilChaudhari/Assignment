#include<stdio.h>
int f(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, f(n));
}

int f(int n){
    if(n>=1)
        return n*f(n-1);
    else
        return 1;
}
