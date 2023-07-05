#include<stdio.h>
int main(){
	int Quantity,Total=0,Grandtotal=0,choice,i;
	char ch;
	do{
	lable:{
	printf("\nPress 1 for Panipuri-20Rs");
	printf("\nPress 2 for Vadapav-30Rs");
	printf("\nPress 3 for Burger-60Rs");
	printf("\nPress 4 for Fries-80");
	printf("\nPress 5 for Sandwich-120Rs");
	printf("\nPress 6 for Pizza-200Rs");
	printf("\nEnter your choice=");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			printf("\nYou select panipuri");
			printf("\nPlease Enter the Quantity:");
			scanf("%d",&Quantity);
			for(i=1;i<=Quantity;i++){
				Total=30*Quantity;
			}
			printf("Amount :%d",Total);
			break;
		}
		case 2:
			printf("\nYou select vadapav");
			printf("\nPlease Enter the Quantity:");
			scanf("%d",&Quantity);
			for(i=1;i<=Quantity;i++){
				Total=30*Quantity;
			}
			printf("Amount :%d",Total);
			break;
		case 3:
			printf("\nYou select Burger");
			printf("\nPlease Enter the Quantity:");
			scanf("%d",&Quantity);
			for(i=1;i<=Quantity;i++){
				Total=60*Quantity;
			}
			printf("Amount :%d",Total);
			break;
		case 4:
			printf("\nYou Select Fries");
			printf("\nPlease Enter the Quantity:");
			scanf("%d",&Quantity);
			for(i=1;i<=Quantity;i++){
				Total=80*Quantity;
			}
			printf("Amount :%d",Total);
			break;
		case 5:
			printf("\nYou Select sandwich");
			printf("\nPlease Enter the Quantity:");
			scanf("%d",&Quantity);
			for(i=1;i<=Quantity;i++){
				Total=120*Quantity;
			}
			printf("Amount :%d",Total);
			break;
		case 6:
			printf("\nYou Select Pizza");
			printf("\nPlease Enter the Quantity:");
			scanf("%d",&Quantity);
			for(i=1;i<=Quantity;i++){
				Total=200*Quantity;
			}
			printf("Amount :%d",Total);
			break;
			default:{
				printf("Not exist in menu");
				printf("\n");
				goto lable;
				break;
			}
		}
	Grandtotal+=Total;
		printf("\nTotal amount is=%d",Grandtotal);
	
	printf("\nWould you like to order anything else?=");
	scanf("%s",&ch);
}
}while(ch!='n');
	if(ch=='y'){
		goto lable;
	}
	else if(ch=='n'){
	    printf("\n--------------------------------------------------------");
		printf("\nYOUR BILL");
		printf("\nTotal amount is=%d",Grandtotal);
		printf("\nThank you!");
	}
	else{
		printf("Wrong charcter");
	}
	return 0;
}
