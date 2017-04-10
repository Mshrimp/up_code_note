#include <stdio.h>

int main(void)
{
	char buf[5];//定义数组 buf表示就是一个地址

	/*fclose(stdout);*/

	int a = 10, b = 123456;
	float f = 22.33;

	printf("f = #%-10.3f#\n", f);

	printf("a = #%10d#\n", a);
	printf("b = #%10d#\n", b);

	printf("buf = %s\n", buf);
	printf("hello!\n");
	fprintf(stdout, "1 : world!\n");
	fprintf(stderr, "2 : world!\n");
	/*sprintf(buf, "hellohello");*/
	snprintf(buf, 5, "hellohello");
	printf("buf = %s\n", buf);
	return 0;
}
