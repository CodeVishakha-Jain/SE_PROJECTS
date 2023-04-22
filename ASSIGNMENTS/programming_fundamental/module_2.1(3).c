//WAP to find area of circle, rectangle and triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	int radius,height_rectangle,width,height_triangle,base;
	char c;
	printf("----enter----\n'c'for getting area of circle\n'r'for getting area of rectangle\n't'for getting area of triangle");
	printf("\nplease enter character for operation:");
	scanf("%c",&c);
	switch(c)
	{
		case 'c':printf("enter the radius of circle:");
				 scanf("%d",&radius);
				 printf("the area of circle:%f",3.14*radius*radius);
				 break;
		case 'r':printf("enter the width of rectangle:");
				 scanf("%d",&width);
				 printf("enter the height of rectangle:");
				 scanf("%d",&height_rectangle);
				 printf("the area of rectangle:%d",width*height_rectangle);
				 break;
		case 't':printf("enter the base of triangle:");
				 scanf("%d",&base);
				 printf("enter the height of triangle:");
				 scanf("%d",&height_triangle);
				 printf("the area of triangle:%d",(base*height_triangle)/2);
				 break;
		default:printf("invalid operator");
				
	}
	return 0;
}
