#include "stack.h"

Stack::Stack(void)
{
	top = 0;
}

bool Stack::is_empty(void) const
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
bool Stack::is_full(void) const
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
bool Stack::push(item & _data)
{
	if (is_full())
	{
		return false;
	}
	items[top] = _data;
	top++;
	return true;
}

bool Stack::pop(item & _data)
{
	if (is_empty())
	{
		return false;
	}
	top--;
	_data = items[top];
	return true;
}
void Stack::show(void) const
{
	int i;
	for (i = 0; i < top; i++)
	{
		cout << items[i] << " ";
	}
	cout << endl;
}



