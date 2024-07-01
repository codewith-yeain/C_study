#include <stdio.h>

int rec_func(int n);


int main(void)
{
	int res;
	
	res = rec_func(2);
	printf("%d\n", res);


	return 0;
}

int rec_func(int n)
{
	int result;
	
	if (n != 1)
	{
		result = n + rec_func(n - 1);
	}
	else {
		result = 1;
	}

	return result;
}