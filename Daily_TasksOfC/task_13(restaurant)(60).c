//WAP making bill of restaurant.
#include<stdio.h>
void restaurant()
{
	int choice,quantity,bill,total1;
	//when we have to use any variable outside the curly braces then we have to declare that variable outside that braces,because if we declare variable outside the curly bracse then it is used everywhere,but if we do it inside the brace,it means it is scope,hence it is used inside that small block.
	int price[4]={90,89,100,80};
	int total[4]={0,0,0,0};
	char str_stop;
	printf("\n	Srno.		Item		Price");
	printf("\n	1.		Pizza		90/-");
	printf("\n	2.		Burgur		89/-");
	printf("\n	3.		Pani-Puri	100/-");
	printf("\n	4.		Dosa		80/-");
	while(1)
	{
		printf("\n\nEnter Your Choice from menu:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n\nYour Item:Pizza");
				printf("\nEnter Quantity:");
				scanf("%d",&quantity);
				total1=quantity*price[choice-1];
				printf("Total Price:%d/-",total1);
				total[0]=total[0]+total1;
				break;
			case 2:
				printf("\n\nYour Item:Burgur");
				printf("\nEnter Quantity:");
				scanf("%d",&quantity);
				total1=quantity*price[choice-1];
				printf("Total Price:%d/-",total1);
				total[1]=total[1]+total1;
				break;
			case 3:
				printf("\n\nYour Item:Pani-puri");
				printf("\nEnter Quantity:");
				scanf("%d",&quantity);
				total1=quantity*price[choice-1];
				printf("Total Price:%d/-",total1);
				total[2]=total[2]+total1;
				break;
			case 4:
				printf("\n\nYour Item:Dosa");
				printf("\nEnter Quantity:");
				scanf("%d",&quantity);
				total1=quantity*price[choice-1];
				printf("Total Price:%d/-",total1);
				total[3]=total[3]+total1;
				break;
			default:
				printf("\ninvalid");
		}
		fflush(stdin);
		printf("\nDo You want Anything else?['y/n']:");
		scanf("%c",&str_stop);
		printf("\n---------------------------------------------");
		if(str_stop!='y')
		{
			break;
		}
	}
	printf("\nthank you");
	bill=total[0]+total[1]+total[2]+total[3];
	printf("\nyour Total Bill:%d",bill);
}
int main()
{
	printf("==========Welcome To TOPS Restaurant==========");
	restaurant();
}
