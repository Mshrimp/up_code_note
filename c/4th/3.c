#include <stdio.h>


void hello(void)
{
	//main();
	hello();
	printf("hello!\n");
}
int main(void)
{
    /*
	 *while(1)
	 *{
	 *    hello();
	 *}
     */

	hello();
	return 0;
}
