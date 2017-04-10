#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cls_t{	//5 8
    /*
	 *int age;	//4
	 *double d;
     */
	/*char sex;	//1*/
	char ch;
	char ch1;
	/*short s;//2*/
    /*
	 *char ch;
	 *int a;
     */
};

int main(void)
{
	struct cls_t cls;

	/*printf("age : %p sex : %p a : %p ch : %p\n", &cls.age, &cls.sex, &cls.a, &cls.ch);*/

	printf("sizeof(struct cls_t) = %d\n", sizeof(struct cls_t));

	return 0;
}
