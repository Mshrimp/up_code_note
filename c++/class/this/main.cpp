#include "this.h"

int main(void)
{
	//默认对象
	//自定义对象
	student stu1("tom", 18, 'F', 79);
	stu1.set_name("tom");
	stu1.set_cn(79.6);
	stu1.show_stu();
	printf("=========\n");
	student max_num("klsdhkajk", 1234, 'A', 55);
	max_num.set_name("jim");
	//max_num.set_cn(65.1);
	max_num.show_stu();

	printf("=========\n");
	max_num = stu1.max_stu(max_num);
	max_num.show_stu();
	return 0;
}
