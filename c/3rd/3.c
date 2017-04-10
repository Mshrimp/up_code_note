#include <stdio.h>

int main(void)
{
	int i, j;
	
	i = 1;
	do{
		printf("%d ", i);
		i++;
	}while(i < 10);


	i = 0;
	do{
		j = 0;
		do{
			putchar('*');
			j++;
		}while(j <= i);
		putchar(10);//换行
		/*getchar();*/
		i++;
	}while(i < 5);
	return 0;
}
