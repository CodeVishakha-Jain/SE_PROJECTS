//WAP to print area of any shape.
#include<stdio.h>
char Area_Finder()
{
	int choice,radi,height,width,heigh,base,area;
	char c;
	printf("\n1.Circle");
	printf("\n2.Rectangle");
	printf("\n3.Triangle");	
	printf("\nEnter choice from the above choice board:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("\nenter radius of your circle:");
				scanf("%d",&radi);
				area=2*3.15*radi;
				printf("\narea of circle=2*PI*RADIUS");
				printf("\narea of circle=%d",area);
				break;
		case 2:
				printf("\nenter height and width of rectangle:");
				scanf("%d",&height);
				scanf("%d",&width);
				printf("\narea of rectangle=height*width");
				printf("\narea of given rectangle=%d",height*width);
				break;
		case 3:
				printf("\nenter height and width of triangle:");
				scanf("%d",&heigh);
				scanf("%d",&base);
				printf("\narea of triangle=(heigh*base)/2");
				printf("\narea of given triangle=%d",(heigh*base)/2);
				break;
		default:
				printf("\ninvalid");		
	}
	printf("\n\nthank you");
}
int main() 
{
	printf("=========Area Finder=========");
	Area_Finder();
	return 0;
}
