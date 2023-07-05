#include <stdio.h>
main(){
   int radius,area,l,b,h;
   float pie=3.14;
   printf("Enter radius of circle:");
   scanf("%d",&radius);
   printf("\n radius of the circle is %d" , radius);
   area=(float)(pie*radius*radius);
   printf("\n Area of the given circle is %d",area);
   printf("\n enter l and b of rectangle");
   scanf("%d %d",&l,&b);
   area=l*b;
   printf("Area of rectangle: %d",area);
   printf("\n enter b and h of triangle");
   scanf("%d %d",&b,&h);
   area=b*h/2;
   printf("Area of triangle:%d",area);
}
