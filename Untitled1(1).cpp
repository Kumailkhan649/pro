#include<stdio.h>
int add(int a, int b)
{
	int res=a+b;
	return res;
}
int main()
{
	int x,y;
	int res=0;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	res =add (x,y);
	printf("%d result  ",res);
	}
