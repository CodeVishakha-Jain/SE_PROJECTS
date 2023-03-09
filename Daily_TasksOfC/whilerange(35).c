//WAP to print 45 to 97
#include<stdio.h>
int main()
{
	int i;
	i=45;
	while(i<=97)
	{
		printf("%d\t",i);
		//when various numbers we have to print then use the \t instead of \n because for various variable it is not fit to the console screen.
		i++;
	}
	return 0;
}
