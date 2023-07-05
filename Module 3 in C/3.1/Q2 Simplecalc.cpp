#include <stdio.h>
main(){
	int a, b, ans;
	float c;
	printf("\n enter value");
	scanf("%d%d", &a, &b);
	ans=a+b;
	printf("\n addition is %d",ans);
	ans=a-b;
	printf("\n substraction is %d", ans);
	c=(float)a/b;
	printf("\n division is %f", c);
	ans=a*b;
	printf("\n multiplication is %d",ans);
	ans=a%b;
	printf("modulo is %d",ans);
}
