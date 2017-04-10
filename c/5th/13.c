#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	/*int a[2][3] = {{1,2,3}, {4,5,6}};*/
	int a[2][3] = {1,2,3,4,5,6};

	// &a
	// a
	//a[0] ?
	//&a[0][0]

	printf("sizeof(a) = %d\n", sizeof(a));
	printf("&a = %p\n", &a);//+1 24
	printf("a = %p\n", a);// +1 12
	printf("a[0] = %p\n", a[0]);//+1 4
	printf("&a[0][0] = %p\n", &a[0][0]);
	for (i = 0; i < 6; i++)
	{
		/*printf("%d ", a[0][i]);*/
		printf("%d ", *(a[0] + i));
	}
	printf("\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = %d %p\n", i, j, a[i][j], &a[i][j]);
		}
	}
	
	return 0;
}
