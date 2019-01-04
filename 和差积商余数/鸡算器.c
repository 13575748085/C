#include<stdio.h>
int main(void)
{
	int m,n;
	int sum,sub,mul,div,mod;
	while(1){
		printf("input two integer:");
		printf("\nm=");
		scanf("%d",&m);
		printf("n=");
		scanf("%d",&n);
		sum=m+n;
		sub=m-n;
		mul=m*n;
		div=m/n;
		mod=m%n;
		printf("sum=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d",sum,sub,mul,div,mod);
		printf("\n---------------------------------------------------\n");
	}
	
	return 0;
}
