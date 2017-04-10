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
		//Time operator*(double mul) const;//重载加法运算术
		//friend function
		//friend Time operator*(double mul, const Time & t);
		friend Time operator*(const Time & t, double mul);
		#if 0
		friend void operator<<(ostream & os, const Time & t);
		#endif
		friend ostream & operator<<(ostream & os, const Time & t);
};

int main(void)
{
	// a int 
	//cout对象 ostream类对象 iostream
	string str("hello");
    /*
	 *cout << str;
	 *cout << endl;
	 *cout << "str = " << str << endl;
     */

	Time one(4, 50);
    /*
	 *cout << one;
	 *cout << endl;
	 *cout << "one time : " << one << endl;
     */

	Time two(6, 40);
	Time three(3, 30);


	Time total;
	//total = one + two + three;
	//total = one.operator+(two + three);
	total = one.operator+(two.operator+(three));
	//total = one.operator+(two);
	total = one * 1.5;//one.operator(1.5)
	//total = 1.5 * one;

	one.show();
	two.show();
	three.show();
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
	printf("add operator!\n");
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

/*
 *Time Time::operator*(double mul) const
 *{
 *    Time result;
 *    printf("operator funtion!\n");
 *    int totalminutes = int (hours * mul * 60 + minutes * mul);
 *    result.hours = totalminutes / 60;
 *    result.minutes = totalminutes % 60;
 *
 *    return result;
 *}
 */
//friend funtion
/*
 *Time operator*(double mul, const Time & t)
 *{
 *    Time result;
 *    printf("friend funtion!\n");
 *    int totalminutes = int (t.hours * mul * 60 + t.minutes * mul);
 *    result.hours = totalminutes / 60;
 *    result.minutes = totalminutes % 60;
 *
 *    return result;
 *
 *}
 */
Time operator*(const Time & t, double mul)
{
	Time result;
	printf("friend funtion!\n");
	int totalminutes = int (t.hours * mul * 60 + t.minutes * mul);
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;

}
#if 0
void operator<<(ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
}
#else
ostream & operator<<(ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}
#endif
void Time::show(void) const
{
	cout << this->hours << " hours, " << this->minutes << " minutes" << endl;
}
