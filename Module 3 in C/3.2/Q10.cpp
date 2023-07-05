#include<stdio.h>  
 int main(){    
int n,sum=0,x;    
printf("Enter a number");    
scanf("%d",&n);    
while(n>0)    
{    
x=n%10;    
sum=sum+x;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}  
