#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//基类
class A{
	private:
		string name;
		int age;
	protected:
		char sex;
	public:
		A(string _name = "noname", int _age = -1, char _sex = 'N');
		~A(void){cout << "A destructor!\n";}
		void set_name_A(string _name){name = _name;};
		void show_A(void);
};

//派生类
class B : public A{
	private:
		int id;
	public:
		B(int _id);
		B(string _name, int _age, char _sex, int _id) : A(_name, _age, _sex) , id(_id){;}
		~B(void){cout << "B destructor!\n";}
		void set_id_B(int _id){id = _id;}
		//void set_name_B(string _name){name = _name;};
		void set_sex_B(char _sex){sex = _sex;};
		void show_B(void);
};
int main(void)
{
	B a("cat", 5, 'F', 10010);

	a.show_B();
	a.show_A();
	return 0;
}

A::A(string _name, int _age, char _sex)
{
	cout << "A constructor !\n";
	name = _name;
	age = _age;
	sex = _sex;
}
void A::show_A(void)
{
	cout << "name : " << name << " , age : " << age
		<< " , sex : " << sex << endl;
}

B::B(int _id)
{
	printf("B constructor!\n");
	id = _id;
}
void B::show_B(void)
{
	cout << "id : " << id << endl;
}
