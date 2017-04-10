#include <stdio.h>


void hello(void)
{
	/*static int count = 5;*/
	
	if (count == 0)
	{
		return ;
	}
	printf("hello! count = %d %p\n", count, &count);
	count--;
	hello();
}
int main(void)
{
	hello();
	return 0;
}
