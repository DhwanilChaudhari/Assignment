#include<stdio.h>
main(){
  int num;
  printf("\n Enter any number:");
  scanf("%d",&num);
  (num%2)? printf("%d is odd number",num):
  printf("%d is even number",num);
}
