#include<stdio.h>
int main(){
    int a [5]={123,456,555,550};
    int x,arr=a[0],n;
    for (x=1;x<=3;x++){
        n=a[x];
        if (n>arr)
        {
            arr=n;
        }
        
    }
    printf("%d is largest",arr);
    return 0;
}
