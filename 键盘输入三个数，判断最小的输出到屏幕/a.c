#include <stdio.h>
int main() {
	int a, b, c, min;
	scanf("%d %d %d", &a,&b,&c);
	min = a;
	if (min>b)
	{
		if (min > c)
			min = c;
		else
			min = b;
	}
	else if (a > c)
	{
		min = c;
	}
	else
	{
		min = a;
	}
	printf("%d",min);
	return 0;
}
