#include<stdio.h>
#include<math.h>
void oddOrEven(int x)
{	
	if (abs(x) % 2 == 0)
	{
		if (x > 0)
		{
			printf("%d => Positive Even\n",x);
		} else if (x < 0)
		{
			printf("%d => Negative Even\n", x);
		} else printf("0 is ZERO ! ! ! ! !\n");
	}
	else if (x > 0)
	{
		printf("%d => Positive Odd\n", x);
	} else {
		printf("%d => Negative Odd\n", x);
	}
}
int main()
{
	int x, number[50];
	scanf_s("%d", &x);
	for (int i = 0; i < x; i++)
	{
		scanf_s("%d", &number[i]);
	}
	for (int i = 0; i < x; i++)
	{
		oddOrEven(number[i]);
	}
	return 0;
}