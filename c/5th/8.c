#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int a[5] = {1,2,3,4,5}, b[5];
	char s1[128] = "hello";
	char s2[128] = "world";

	/*s2 = s1;*/
	/*s2 = "hello";*/

    /*
	 *strcpy(b, a);
	 *for (i = 0; i < 5; i++)
	 *{
	 *    printf("%d ", b[i]);
	 *}
	 *printf("\n");
     */
	
	printf("s2 = %s\n", s2);
	//s2 = world s1 = hello
	//s2 + 3 => l
	//s1 + 2 -> l
	strcpy(s2 + 3, s1 + 2);//worllo
	/*strncpy(s2, s1, 2);*/
	printf("s2 = %s\n", s2);
	/*printf("s2 + 6 = %s\n", s2 + 6);*/


	return 0;
}
