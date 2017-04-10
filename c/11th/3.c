#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERRP(con, func, ret) do{							\
						if (con)							\
						{									\
							printf("%s failed!\n", func);	\
							ret;							\
						}									\
					}while(0)

int main(void)
{
	int ***p  = NULL;

	p = (int ***)malloc(sizeof(int **));
	/*p = NULL;*/
	ERRP(NULL == p, "malloc p", goto ERR1);
    /*
	 *if (NULL == p)
	 *{
	 *    printf("malloc p failed!\n");
	 *    return -1;
	 *}
     */
	*p = (int **)malloc(sizeof(int *));
	ERRP(NULL == *p, "malloc *p", goto ERR2);
    /*
	 *if (NULL == *p)
	 *{
	 *    free(p);
	 *    printf("malloc *p failed!\n");
	 *    return -1;
	 *}
     */
	**p = (int *)malloc(sizeof(int));
	**p = NULL;
	ERRP(NULL == **p, "malloc **p", goto ERR3);
    /*
	 *if (**p == NULL)
	 *{
	 *    free(*p);
	 *    free(p);
	 *    printf("malloc **p failed!\n");
	 *    return -1;
	 *}
     */

	***p = 1122;

	printf("***p = %d\n", ***p);
	return 0;

ERR3:
	free(*p);
ERR2:
	free(p);
ERR1:
	return -1;
}
