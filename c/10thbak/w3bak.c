#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s1[1024], s2[1024];
	int i = 0, j;
	char buf[1024];//保存公共字串max
	char *tmp = s2, *p = NULL;
	int max = 0;

	//手动输入字符串1和字符串2
	printf("please input string1: ");
	fgets(s1, sizeof(s1), stdin);
	if (s1[strlen(s1) - 1] == '\n')	//检测字符串最后一个字符，如果是'\n'，则替换为'\0'
		s1[strlen(s1) - 1] = '\0';

	printf("s1 = %s\n", s1);
	printf("please input string2: ");
	fgets(s2, sizeof(s2), stdin);
	if (s2[strlen(s2) - 1] == '\n')
		s2[strlen(s2) - 1] = '\0';

	printf("s2 = %s\n", s2);


	for (i = 0; i < strlen(s1); i++)	//在字符串s1逐个字符循环
	{
		tmp = s2;	//每次查找，将tmp指针重新指向s2开头
		while((p = strchr(tmp, s1[i])) != NULL)	//在tmp指向的字符串中查找s1中的字符，并将查找结果报存在*p
		{
			for (j = 2; j <= strlen(s1) - i; j++)	
			{
				if (strncmp(s1 + i, p, j) == 0)		//找到相同字符后，查找有多少个相同字符
				{
					if (max < j)	//如果不是最大相同字符串，保存最大字串
					{
						strncpy(buf, p, j);
						buf[j] = '\0';
						max = j;
					}
				}
				else
				{
					break;
				}
			}
			tmp = p + 1;	//调整字符串2的查找范围
		}
	}
	printf("buf = %s\n", buf);
	return 0;
}
