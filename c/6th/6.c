#include <stdio.h>
#include <string.h>

int main(void)
{
	system("stty -echo");//关闭回显
	system("stty -icanon");//关闭缓冲区
    /*
	 *while(1)
	 *{
	 *    putchar(getchar());
	 *    [>fflush(NULL);<]
	 *}
     */
	system("stty echo");//开启回显
	system("stty icanon");//开启缓冲区
	return 0;
}
