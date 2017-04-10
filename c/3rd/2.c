#include <stdio.h>

int main(void)
{
	int i;

//1分钟 ＝ 60 秒
//1秒 ＝ 1000 毫秒
//1毫秒 ＝ 1000 微妙

	i = 1;
	while(i < 10)
	{
		sleep(10);//延迟函数 单位秒
		usleep(100000);//0.1秒  单位微妙
		printf("%d \n", i);
		i++;
		/*fflush(stdout);//刷新输出缓冲区*/
		/*fflush(stdin);//刷新输入缓冲区*/
		/*fflush(NULL);//刷新缓冲区*/
	}

	i = 0;

	int j;
	while (i < 5)
	{
		j = 0;
		while (j <= i)
		{
			putchar('*');
			j++;
		}
		putchar(10);
		i++;
	}
	return 0;
}















