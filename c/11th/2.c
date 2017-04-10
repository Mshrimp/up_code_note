#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define GETLINES(string, buf) do{								\
						printf(string);							\
						fgets(buf, sizeof(buf), stdin);			\
						if (buf[strlen(buf) - 1] == '\n')		\
							buf[strlen(buf) - 1] = '\0';		\
					}while(0)
	
#define STRING "admin"
#define PRI printf
#define TEST(a) printf(#a" = %d\n", a)
#define TEST1(a, b) a##b//ab
#define TEST2(...) printf(__VA_ARGS__)
//stcl + p


void test(int a)
{
	printf("a = %d\n", a);
}
int main(void)
{
	int TEST1(a, b) = 123;

	int a = 10, b = 20, cccc = 30;

	printf("ab = %d\n", ab);
	test(a);
	test(b);
	TEST(a);
	TEST(b);
	TEST(cccc);
	
	TEST2("hello!\n");
	TEST2("a = %d b = %d\n", a, b);

	char username[128];
		
	GETLINES("please input username : ", username);

	if (strcmp(username, STRING) == 0)
	{
		printf("yes!\n");
	}
	else
	{
		printf("no!\n");
	}
	PRI("hello!\n");
	return 0;
}
