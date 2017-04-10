#include <stdio.h>
#include <string.h>

void turn(char s[])
{
	int i, len;
	
	len = strlen(s);

	for (i = 0; i < strlen(s) / 2; i++)
	{
		s[i] ^= s[len - i - 1];
		s[len -i - 1] ^= s[i];
		s[i] ^= s[len - i - 1];
	}
}
int main(void)
{
	char s1[1024], s2[1024], s3[1024];
	int min, max, i;

	memset(s3, 0, sizeof(s3));
	printf("please input string1 : ");
	fgets(s1, sizeof(s1),stdin);
	if (s1[strlen(s1) - 1] == '\n')
		s1[strlen(s1) - 1] = '\0';

	printf("please input string2 : ");
	fgets(s2, sizeof(s2),stdin);
	if (s2[strlen(s2) - 1] == '\n')
		s2[strlen(s2) - 1] = '\0';

	min = strlen(s1) > strlen(s2) ? strlen(s2) : strlen(s1);
	max = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
	printf("%*s\n", max + 1, s1);
	printf("%*s\n", max + 1, s2);


	turn(s1);
	turn(s2);
    /*
	 *printf("s1 = %s\n", s1);
	 *printf("s2 = %s\n", s2);
     */

	for (i = 0; i < min; i++)
	{
		s3[i] = ((s1[i] - 48) + (s2[i] - 48) + s3[i]) % 10 + 48;
		s3[i + 1] = ((s1[i] - 48) + (s2[i] - 48)) / 10;
	}
	printf("i = %d\n", i);

	for (; i < max; i++)
	{
        /*
		 *printf("s3[i] = %d", s3[i]);
		 *getchar();
         */
		s3[i + 1] = strlen(s1) > strlen(s2) ? ((s1[i] - 48) + s3[i]) / 10 : ((s2[i] - 48) + s3[i]) / 10;
		s3[i] = strlen(s1) > strlen(s2) ? ((s1[i] - 48) + s3[i]) % 10 + 48 : ((s2[i] - 48) + s3[i]) % 10 + 48;
	}

	if (s3[i] == 1)
		s3[i] = '1';
	turn(s3);

	printf("%*s\n", max + 1, s3);

	return 0;
}
