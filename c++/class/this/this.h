#ifndef __THIS_H__
#define __THIS_H__

#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//声明一个类
class student{
	private:
		string name;//对象
		int age;
		char sex;
		float cn;
	public:
		//student(string _name = "tom", int _age = 12, char _sex = 'F', float _cn = 100);
		student(void){};
		student(string _name, int _age, char _sex, float _cn);
		void show_stu(void) const;//常量函数 遍历
		student & max_stu(student & stu1);
		//void set_cn(float _cn) {cout << "cn = " << cn << endl;}
		void set_cn(float _cn) {this->cn = _cn;}
		void set_name(string _name) {name = _name;}
		void set_age(int _age) {this->age = _age;}
		void set_sex(char _sex) {this->sex = _sex;}
		~student();//析构函数
};

#endif /*THIS_H*/
