#include<stdio.h>

int main()
{
	int n, D, I;
	scanf("%d", &n);
	while(n-- && scanf("%d%d", &D, &I))
	{
		int k = 1;
		for(int i = 0; i < D-1; i++)
			if(I%2)
			{
				k = k*2;
				I = (I+1)/2;
			}
			else
			{
				k = k*2+1;
				I /= 2;
			}
		printf("%d\n", k);
	}
	return 0;
}
