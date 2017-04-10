#include <stdio.h>

int main(void)
{
	int i;
	/*int arr[10];// = {1,2,3,4,5,6,7,8,9,10};//定义并初始化*/
	int arr[10] = {1, 2, [8]=55, [3]=3};

	/*arr[10] = {11, 22, 33, 44};*/

    /*
	 *printf("arr[0] = %d\n", arr[0]);
	 *printf("arr[1] = %d\n", arr[1]);
	 *printf("arr[2] = %d\n", arr[2]);
	 *printf("arr[9] = %d\n", arr[9]);
	 *printf("arr[10] = %d\n", arr[10]);
     */

	/*arr[0] = 0;*/

	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] = %d %p\n", i, arr[i], &arr[i]);
	}
	return 0;
}
