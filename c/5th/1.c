#include <stdio.h>


//初始化
void init(int a[], int size)
{
	int i;

    /*
	 *printf("init &a = %p a = %p\n", &a, a);
	 *printf("init : len = %d\n", sizeof(a) / sizeof(a[0]));
	 *printf("init : sizeof(a) = %d\n", sizeof(a));
	 *printf("init : sizeof(a[0]) = %d\n", sizeof(a[0]));
     */
	for (i = 0; i < size; i++)
	{
		a[i] = rand() % 100;
	}
}

//遍历 打印
void show(int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


//求最大数
int arr_max(int a[], int size)
{
	int max = a[0];
	int i;


	for (i = 1; i < size; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	return max;
}
//求最小值
int arr_min(int a[], int size)
{
	int min = a[0];
	int i;


	for (i = 1; i < size; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}

	return min;
}
//查找：
int arr_ind(int key, int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (key == a[i])
		{
			return a[i];
		}
	}

	return -1;
}
//反转
void arr_trun(int a[], int size)
{
	int i, tmp;

	for (i = 0; i < size / 2; i++)
	{
		tmp = a[i];
		a[i] = a[size - i - 1];
		a[size -i - 1] = tmp;
	}
}
//排序：
//左移：
//右移：
int main(void)
{
	int a[10];
	int key;

	srand(time(NULL));
    /*
	 *printf("main : &a = %p a = %p\n", &a, a);
	 *printf("main : len = %d\n", sizeof(a) / sizeof(a[0]));
     */
	init(a, sizeof(a) / sizeof(a[0]));
	show(a, sizeof(a) / sizeof(a[0]));

	printf("max = %d\n", arr_max(a, 10));
	printf("min = %d\n", arr_min(a, 10));
	arr_trun(a, 10);
	show(a, sizeof(a) / sizeof(a[0]));
    /*
	 *printf("please input find key : ");
	 *scanf("%d", &key);
	 *printf("find = %d\n", arr_ind(key, a, 10));
     */
	return 0;
}
