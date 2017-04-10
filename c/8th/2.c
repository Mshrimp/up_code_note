#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int *p = NULL;

	p = (int *)malloc(4);

	free(p);
	free(p);
	free(p);
	free(p);
	free(p);
	return 0;
}
