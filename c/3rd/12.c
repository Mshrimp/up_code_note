#include <stdio.h>

int main(void)
{
loop:
	printf("hello!\n");
	goto loop;

/*
 *    while (1)
 *    while(1)
 *    {
 *        while(1)
 *        {
 *            printf("hello!\n");
 *            goto loop;
 *            [>break;<]
 *        }
 *        [>break;<]
 *    }
 *
 *loop:
 */
	printf("world!\n");
	return 0;
}
