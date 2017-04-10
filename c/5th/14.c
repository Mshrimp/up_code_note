#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[2][2][3];// 48

	// &a			48	48	48		
	// a			12	24	24
	// a[0]			8	12	24
	// a[0][0]		4	4	12
	// &a[0][0][0]
	return 0;
}
