#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dota(void)
{
	printf("dota!\n");
}
void cs(void)
{
	printf("cs!\n");
}

void lili(void)
{
	printf("lili!\n");
}
void mary(void)
{
	printf("mary!\n");
}

struct a_t{
	int a;
	int *p;
	int *s[10];
	int (*q)[10];
	void (*func)(void);
};

int main(void)
{
	struct a_t a = {10, &a.a};
	
	a.func = dota;
	a.func = mary;
	a.func();

	printf("a.a = %d %p\n", a.a, &a.a);
	printf("a.p = %d\n", *(a.p));

	
	return 0;
}
