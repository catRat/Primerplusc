#include<stdio.h>
int mix(int x, int y);
int main(void)
{
	int x = 2, y = 5;
	printf("%d", (x < y) ? x:y);
	return 0;
}

