#include<stdio.h>
main(){
	int a=5,b=10;
	printf("Before swap a=%d b=%d",a,b);
	  a=a+b;   
      b=a-b;
      a=a-b;
    printf("\nAfter swap a=%d b=%d",a,b);    
}
