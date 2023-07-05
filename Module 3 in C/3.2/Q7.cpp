#include<stdio.h>    
int main(){    
 int x1=0,x2=1,x3,i,num;    
 printf("Enter the number of elements");    
 scanf("%d",&num);    
 printf("\n%d %d",x1,x2); 
 for(i=2;i<num;++i)
 {    
  x3=x1+x2;    
  printf("%d",x3);    
  x1=x2;    
  x2=x3;    
 }  
  return 0;  
 }    
