#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

class Time{
	private:
		int hours;//小时
		int minutes;//分钟
	public:
		Time(void);//把时间初始化为0 this
		Time(int h, int m);//参数初始化函数 this
		void AddMin(int m);//添加分钟 this
		void AddHor(int h);//添加小时 this
		void Reset(int h = 0, int m = 0);//重设时间 this
		Time Sum(const Time & t) const;//求和 +
		void show(void) const;//显示小时和分钟
		//operator function
		Time operator+(const Time & t) const;//重载加法运算术
		Time operator-(const Time & t) const;//重载加法运算术
		Time operator*(double mul) const;//重载加法运算术
		//friend function
		friend void test(Time & t, int mul);
};

void test(Time & t, int mul)
{
	cout << "test : hours : " << t. hours << endl;
	cout << "mul = " << mul << endl;
}
int main(void)
{
	Time one(4, 50);
	Time two(6, 40);
	Time total;

	total = one * 1.5;//one.operator(1.5)
	//total = 1.5 * one;
	test(one, 3);

	one.show();
	two.show();
	total.show();
	return 0;
}

//default constructor
Time::Time(void)
{
	this->hours = 0;
	this->minutes = 0;
}
Time::Time(int h, int m)
{
	this->hours = h;
	this->minutes = m;
}
void Time::AddMin(int m)
{
	this->minutes += m;
	this->hours += this->minutes / 60;
	this->minutes = this->minutes % 60;
}
void Time::AddHor(int h)
{
	this->hours += h;
}

void Time::Reset(int h, int m)
{
	this->hours = h;
	this->minutes = m;
}

Time Time::Sum(const Time & t) const
{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diff;
	int t1, t2;
	t1 = this->minutes + 60 * this->hours;
	t2 = t.minutes + 60 * t.hours;
	diff.hours = (t2 - t1) / 60;
	diff.minutes = (t2 - t1) % 60;
	
	return diff;
}

Time Time::operator*(double mul) const
{
	Time result;
	int totalminutes = int (hours * mul * 60 + minutes * mul);
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

void Time::show(void) const
{
	cout << this->hours << " hours, " << this->minutes << " minutes" << endl;
}
