#include <stdio.h>
main (){
	int days,years,weeks;
	printf("Enter days");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("\n years:%d",years);
    printf("\n weeks:%d",weeks);
    printf("\n days:%d",days);
}
