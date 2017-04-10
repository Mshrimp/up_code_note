#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int (FUNC)(int, int);

struct op_t{
	char ch;
	FUNC *func;
};
//+
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int dev(int a, int b)
{
	return a / b;
}
int mode(int a, int b)
{
	return a % b;
}
int powi(int a, int b)
{
	int c = 1;
	while(b--)
		c *= a;
	return c;
}

int main(void)
{
	struct op_t op[6] = {{'+', add}, 
						{'-', sub},
						{'*', mul},
						{'/', dev},
						{'%', mode},
						{'^', powi}};

	int i, j, count = 0;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (op[j].func(op[i].func(5, 3), 2) == 4)
			{
				printf("(5 %c 3) %c 2= 4\n", op[i].ch, op[j].ch);
				count++;
			}
		}
	}
	/*printf("powi = %d\n", powi(2, 1));*/

	printf("共有%d种组合!\n", count);
	return 0;
}
