#include<stdio.h>
int swapping(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
		printf("\n values after swapping is %d and %d",a,b);
}
int main()
{
	int x,y,swa;
			printf("enter two numbers");
				scanf("%d%d",&x,&y);
					printf("values before  swapping is %d and %d",x,y);
						swa=swapping(x,y);
	
}
