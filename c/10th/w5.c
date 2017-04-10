#include "vt.h"

#define COL 40

int main(void)
{
	int i;
	int l = 0;
	char ch;
	long long st, et;
	int speed = 0;
	char s[] = "man  formats  and  displays the on-line manual pages.  If you specify section, man only looks in that section of  the  man- ual.   name is normally the name of the manual page, which is typically the name of a command, function, or file.  However, if name contains a slash (/) then man interprets it as";

	system("clear");

	for (i = 0; i < strlen(s); i++)
	{
		if (i % COL == 0 && i != 0)
		{
			l++;
			putch(10, 10, '\n');
		}
		putch(10, 10, s[i]);
	}

	l = l + 3;
	gotoxy(l, 1);
	printf("输入单词：0个, 错误单词：0个，每分钟输入个数：0个");
	draw_hline(l + 1, 1, COL, 10, '=');
	/*getchar();*/

	i = 0;
	system("stty -echo");
	system("stty -icanon");
	gotoxy(l+2, 1);
	st = time(NULL)
	while(1)
	{
		ch = getchar();

		if (ch == 27)
		{
			break;
		}

		if (ch == s[i])
		{
			putch(34, 10, ch);
		}
		else
		{
			putch(31, 10, ch);
			count++;
		}
		et = time(NULL);

		speed = i / ((float)(et - st) / 60.0);

		
		fflush(NULL);
		i++;
	}
	system("stty echo");
	system("stty icanon");
	return 0;
}
