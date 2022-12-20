#include<stdio.h>

int main()
{
	int a,b,i;
	printf("Enter the number:");
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		if(i%3==0)
			printf("Foo\n");
		else if(i%2==0)
			printf("Bar\n");
		else 
			printf("Baz\n");
		
	}
	return 0;
}

