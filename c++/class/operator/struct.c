#include <stdio.h>

struct a_t{
	int a;
	int *p;
	
};

int main(void)
{
	int a = 10;

	struct a_t s = {20, &a};
	struct a_t *b = &s;

	printf("s.a = %d\n", s.a);
	/*printf("p = %d\n", *(s.p));*/
	/*printf("p = %d\n", s.*p);*/
	printf("b->p = %d\n", *(b->p));
	printf("b->p = %d\n", *((*b).p));
	printf("b->p = %d\n", *((*b).p));


}
