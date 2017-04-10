#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void *p = NULL;
	int i;
	//malloc
	p = (char *)malloc(10);

	for (i = 0; i < 10; i++)
	{
		printf("%p ", p + i);	
	}

/*
 *    for (i = 0; i < 10; i++)
 *    {
 *        *((int *)p[i]) = rand() % 100;
 *    }
 *
 *    for (i = 0; i < 10; i++)
 *    {
 *        //printf("%d ", p[i]);
 *        printf("%p : %d\n", p + i, p[i]);
 *    }
 *    printf("\n");
 */
	return 0;
}
