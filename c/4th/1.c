#include <stdio.h>
#include <stdarg.h>

/*int main(void)*/
void hello(int a, ...)
{
	int tmp;
	va_list ap;//定义不定参结构体
	va_start(ap, a);//初始化参数列表


    /*
	 *printf("tmp = %d\n", va_arg(ap, int));
	 *printf("tmp = %d\n", va_arg(ap, int));
	 *printf("tmp = %d\n", va_arg(ap, int));
	 *printf("tmp = %d\n", va_arg(ap, int));
	 *printf("tmp = %d\n", va_arg(ap, int));
     */
	/*printf("tmp = %d\n", va_arg(ap, int));*/
	
	while ((tmp = va_arg(ap, int)) != 0)
	{
		/*printf("%d ", tmp);*/
		sum += tmp;
	}
	printf("\n");
	va_end(ap);//清空内存空间
	printf("hello!\n");
}
int main(int argc, char *argv[])
{
	int i;
	/*printf("hello!\n");	*/

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	pri("hello");
	/*hello(1);*/
	hello(1, 2, 3, 4, 5, 0);

	return 0;
}
