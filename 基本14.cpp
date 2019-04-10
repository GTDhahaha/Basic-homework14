#include<stdio.h>
#include<stdlib.h>


int main()
{
	int x,y,z;
	printf("Let's build a triangle!\nPlease enter three sides(x,y,z)\n");
	printf("x is :");
	scanf("%d",&x);
	printf("y is :");
	scanf("%d",&y);
	printf("z is :");
	scanf("%d",&z);
	
		if (x == y)
		{
			int a;
			a = x + y;
			printf("a = %d\n",a);
			printf("z = %d\n",z);
			if (x == z)
				printf("These three sides can form an equilateral triangle.\n");
			else if (a>z)
				printf("These three sides can form an isosceles triangle.\n");
			else if (a<=z)
				printf("These three sides cannot form a triangle.\n");
		}
		
		else if (x == z)
		{
			int a;
			a = x + z;
			if (a<=y)
				printf("These three sides cannot form a triangle.\n");
			else if (a>y)
				printf("These three sides can form an isosceles triangle.\n");
		}
	
		else if (y == z)
		{
			int a;
			a = y + z;
			if (a<=x)
				printf("These three sides cannot form a triangle.\n");
			else if (a>x)
				printf("These three sides can form an isosceles triangle.\n");
		}
	
		else if (x>y)
		{
			if (z>x)	
				{
					int a;
					a = x+y;
					if (a<z)
						printf("These three sides cannot form a triangle.\n");
					else
						printf("These three sides can form a triangle.\n");
				}

			else if (z<x)
				{
					int a;
					a = z+y;
					if (a<x)
						printf("These three sides cannot form a triangle.\n");
					else
						printf("These three sides can form a triangle.\n");
				}
		}
	
		else if (x<y)
		{
			if (z>y)	
				{
					int a;
					a = x+y;
					if (a<z)
						printf("These three sides cannot form a triangle.\n");
					else
						printf("These three sides can form a triangle.\n");
				}

			else if (z<y)
				{
					int a;
					a = z+x;
					if (a<y)
						printf("These three sides cannot form a triangle.\n");
					else
						printf("These three sides can form a triangle.\n");
				}
		}


	system("pause");
	return 0;
}
