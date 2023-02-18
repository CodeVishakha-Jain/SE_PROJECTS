//WAP to give the grade to the students given marks.
#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,percentage;
	printf("enter the marks of maths:");
	scanf("%d",&sub1);
	printf("enter the marks of science:");
	scanf("%d",&sub2);
	printf("enter the marks of english:");
	scanf("%d",&sub3);
	printf("enter the marks of gujarati:");
	scanf("%d",&sub4);
	printf("enter the marks of s.s:");
	scanf("%d",&sub5);
	percentage=(sub1+sub2+sub3+sub4+sub5)/5;
	printf("your percentage =%d\n",percentage);
	if(percentage>=85)
	{
		printf("Grade A");
	}
	else if(percentage>=75)
	{
		printf("Grade B");
	}
	else if(percentage>=65)
	{
		printf("Grade C");
	}
	else if(percentage>=55)
	{
		printf("Grade D");
	}
	else if(percentage>=40)
	{
		printf("Grade E");
	}
	else
	{
		printf("FAIL");
	}
}
