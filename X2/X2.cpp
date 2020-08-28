#include<stdio.h>
int main() 
{
	int x1, x2, s;
	printf("Mean = (X1/X2)/2 \n");
	printf("Input X1 and Mean = ");
	if (scanf_s("%d %d", &x1, &s)) {
		if ( x1 >=0 && x1 <= 1000 && s >= 0 && s <= 1000) {
			x2 = (s * 2) - x1;
			printf("%d",x2);
		}
		else printf("Error. X1 and Mean must be less than 1000.");
	}
	else printf("Error. Please input integer");
	return 0;
}