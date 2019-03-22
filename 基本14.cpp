#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a,b,c;
	printf("Let's build a triangle!\nPlease enter three sides(a,b,c)\n");
	printf("a is :");
	scanf("%d",&a);
	printf("b is :");
	scanf("%d",&b);
	printf("c is :");
	scanf("%d",&c);
	
	if (a+b>c)
		printf("These three sides can form a triangle.\n");
	
	else if (a+c>b)
		printf("These three sides can form a triangle.\n");
		
	else if (b+c>a)
		printf("These three sides can form a triangle.\n");
		
	else if (a+b<c)
		printf("These three sides can form a triangle.\n");
	
	else if (a+c<b)
		printf("These three sides can form a triangle.\n");
		
	else if (b+c<a)
		printf("These three sides can form a triangle.\n");	
		
	else
		printf("These three sides cannot form a triangle.\n");

	system("pause");
	return 0;
}
