#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>

using namespace std;

//声明一个类模板
template<class Type>

class Stack{
	private:
		enum {MAX = 10};//栈的大小
		Type items[MAX];//栈数据
		int top;//栈顶元素
	public:
		Stack(void);//栈的构造函数
		bool is_full(void) const;//判断是否是满栈
		bool is_empty(void) const;//判断是否是空栈
		bool push(Type &);//压栈
		bool pop(Type &);//弹栈
		void show(void) const;//栈便利
		~Stack(void){};//栈的析构函数
};


template<class Type>
Stack<Type>::Stack(void)
{
	top = 0;
}

template<class Type>
bool Stack<Type>::is_empty(void) const
{
	if (top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class Type>
bool Stack<Type>::is_full(void) const
{
	if (top == MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class Type>
bool Stack<Type>::push(Type & _data)
{
	if (is_full())
	{
		return false;
	}
	items[top] = _data;
	top++;
	return true;
}

template<class Type>
bool Stack<Type>::pop(Type & _data)
{
	if (is_empty())
	{
		return false;
	}
	top--;
	_data = items[top];
	return true;
}

template<class Type>
void Stack<Type>::show(void) const
{
	int i;
	for (i = 0; i < top; i++)
	{
		cout << items[i] << " ";
	}
	cout << endl;
}


#endif /*STACK_H*/
