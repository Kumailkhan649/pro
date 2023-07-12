#include<stdio.h>
int prime(int a)
{
	int d;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			d++;
		}
	}
	if(d==2){
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
int main()
{
	int x,pri;
	printf("enter prime number");
	scanf("%d",&x);
	pri=prime(x);
}

