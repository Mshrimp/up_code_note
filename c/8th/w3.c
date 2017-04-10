#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//实现动态数组
//为了解决空间不足或者空间浪费问题
int main(void)
{
	int i;
	int num;//表示接受用户输入数据
	int *new =  NULL;//新的空间地址
	int count = 0;//统计数据个数
	int *prev = NULL;//上次空间地址

	//接受用户数据数据
	while(1)
	{
		printf("please input %d numbers : ", count + 1);
		scanf("%d", &num);
		if (num == -1)//退出条件
		{
			break;
		}

		//申请数据空间
		new = (int *)malloc(sizeof(int) * (count + 1));
		if (NULL == new)
		{
			printf("malloc failed!\n");
			return -1;
		}

		memcpy(new, prev, sizeof(int) * count);
		free(prev);
		memcpy(new + count, &num, sizeof(int));
		/**(new + count) = num;*/
		prev = new;

		/*printf("num = %d\n", num);*/
		count++;
	}

	//遍历
	for (i = 0; i < count; i++)
	{
		printf("%d %p\n", new[i], &new[i]);
	}
	printf("\n");
	//销毁
	free(new);
	/*free(prev;*/
	return 0;
}
