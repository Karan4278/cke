#include<stdio.h>
#include"pp010.h"
int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	if(iseven(n)) printf("%d is even.", n);
	else printf("%d is odd.", n);

	return 0;
}
