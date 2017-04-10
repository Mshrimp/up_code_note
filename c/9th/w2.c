#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_atoi(char *s)
{
	int sum = 0;

	while(*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			sum *= 10;
			sum += *s - 48;
		}
		else
		{
			return sum;
		}
		s++;
	}

	return sum;
}

int main(void)
{
	int i = 0, j = 0, k = 0;
	char buf[128];
	char tmp[128];
	int arr[10];
	int num;
	int sum = 0;

    /*
	 *printf("my_atoi(123) = %d\n", my_atoi("123"));
	 *printf("my_atoi(123) = %d\n", my_atoi("12:34"));
	 *printf("my_atoi(123) = %d\n", atoi("abc123"));
     */
	printf("please input string : ");
	fgets(buf, sizeof(buf), stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	while(1)
	{
#if 0
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			num = buf[i] - 48;
			sum += num;
		}
		else if (buf[i] == '\0')
		{
			break;
		}
#else

		if (buf[i] >= '0' && buf[i] <= '9')
		{
			tmp[j++] = buf[i];
		}
		else if (j != 0)
		{
			tmp[j] = '\0';
			arr[k] = my_atoi(tmp);
			sum += my_atoi(tmp);
			j = 0;
			k++;
		}
		else if (buf[i] == '\0')
		{
			break;
		}

#endif
		i++;
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("sum = %d\n", sum);
	return 0;
}
