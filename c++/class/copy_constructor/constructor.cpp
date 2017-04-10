#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

class StringBad
{
	private:
		char *str;//字符串
		int len;//表示字符串长度
		static int num_strings;//表示接受字符串个数
	public:
		StringBad(void);
		StringBad(const char *s);
		StringBad(const StringBad & st);//复制构造函数
		~StringBad(void);
		
		//test
		void set_len_num(int _len = 0, int _num = 0);
		void show(void);
		void show_num(void);
		//operator function
		StringBad & operator=(const StringBad & st);
		//friend function
		friend ostream & operator<<(ostream & os, const StringBad & st);
};

//初始化静态变量
int StringBad::num_strings = 0;

void StringBad::show_num(void)
{
	cout << "num_strings = " << this->num_strings << endl;
	cout << "len = " << this->len << endl;
}

void callme1(StringBad & ref);
void callme2(StringBad val);
int main(void)
{
	{
		cout << "starting an block!\n";
		StringBad one("tom");
		StringBad two("jim");
		StringBad three("mary");
		
		cout << "one : " << one << endl;
		cout << "two : " << two << endl;

		callme1(one);//ref
		cout << "one : " << one << endl;
		
		//多次调用析构函数造成
		callme2(two);//value
		cout << "two : " << two << endl;

		//调用默认复制构造函数
		//StringBad four = one;
		//StringBad four(one);
        /*
		 *StringBad four = StringBad(one);
		 *cout << "four : " << four << endl;
         */
	
		StringBad five;
		five = two;
		cout << "five = " << five << endl;

		cout << "exit the block!\n";
	}
	cout << "end main()!\n";
	//st.set_len_num(10, 20);
	//st.show_num();
	return 0;
}

void callme1(StringBad & ref)
{
	cout << "string pass by reference! " << ref << endl;
}
void callme2(StringBad val)
{
	cout << "string pass by value! " << val << endl;
}


void StringBad::set_len_num(int _len, int _num)
{
	this->len = _len;
	this->num_strings = _num;
}

void StringBad::show(void)
{
	cout << "len = " << len << endl; 
	//cout << "num_strings = " << num_strings << endl;
}
StringBad::StringBad(void)
{	
	len = 4;
	str = new char [4];
	strcpy(str, "c++");
	num_strings++;
	cout << num_strings << " : " << str << " created!\n";
}
StringBad::StringBad(const char *s)
{
	len = strlen(s);
	str = new char [len + 1];
	strcpy(str, s);
	num_strings++;
	cout << num_strings << " : " << str << " created!\n";
}


StringBad::StringBad(const StringBad & st)
{
	printf("hello!\n");
	num_strings++;
	len = st.len;
	str = new char [len + 1];
	strcpy(str, st.str);//深拷贝
	//str = st.str;//浅拷贝
}
StringBad::~StringBad(void)
{
	cout << num_strings << " : " << str << " delete!\n";
	--num_strings;
	delete [] str;
}
StringBad & StringBad::operator=(const StringBad & st)
{
	if (this == &st)
	{
		return *this;
	}
	delete [] str;
	len = st.len;
	str = new char [len + 1];
	strcpy(str, st.str);

	return *this;
}
ostream & operator<<(ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}
