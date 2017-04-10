#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>

using namespace std;

typedef int item;

class Stack{
	private:
		enum {MAX = 10};//栈的大小
		item items[MAX];//栈数据
		int top;//栈顶元素
	public:
		Stack(void);//栈的构造函数
		bool is_full(void) const;//判断是否是满栈
		bool is_empty(void) const;//判断是否是空栈
		bool push(item &);//压栈
		bool pop(item &);//弹栈
		void show(void) const;//栈便利
		~Stack(void){};//栈的析构函数
};

#endif /*STACK_H*/
