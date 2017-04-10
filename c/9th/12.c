#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct a_t{
	struct b_t *a;
    /*
	 *int b;
	 *struct a_t *c;
     */
};
struct b_t{
	struct a_t *a;
    /*
	 *int a;
	 *int b;
	 *struct a_t s;
     */
};


int main(void)
{
	struct a_t a = {NULL, 22};

	a.c = &a;
	
	printf("a.b = %d\n", a.b);
	printf("a.c.b = %d\n", a.c->c->c->c->c->b);

	/*printf("a.a.a = %d\n", a.a.a);*/
	/*printf("a.a.b = %d\n", a.a.b);*/
	printf("a.a.b = %d\n", a.b);

	return 0;
}
