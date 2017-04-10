#include "stack.h"

int main(void)
{
	Stack st;	
	Stack se;
	int i;
	item num;
	item po;
	char ch;

	for (i = 0; i < 10 + 2; i++)
	{
		num = rand() % 100;
		st.push(num);
	}
	st.show();
	
	st.pop(po);
	cout << "po = " << po << endl;

	printf("==========\n");

	while(1)
	{
		printf("please input A -> push\n"
				"please input P -> pop\n" 
				"please input Q -> exit\n");
		printf("=======================\n");

		cin >> ch;

		if (ch == 'Q' || ch == 'q')
		{
			break;
		}
		
		switch(ch)
		{
			case 'a':
			case 'A':
				cout << "please input number : ";
				cin >> num;
				if (se.is_full())
				{
					cout << "stack is full!\n";
				}
				else
				{
					se.push(num);
				}
				break;
			case 'p':
			case 'P':
				if (se.is_empty())
				{
					cout << "stack is empty!\n";
				}
				else
				{
					se.pop(po);
					cout << "pop : " << po << endl;
				}
				break;
		}
	}
	//se.show();
	

	return 0;
}
