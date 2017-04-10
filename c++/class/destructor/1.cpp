#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

//typedef double INT
using namespace std;

int main(void)
{
	void *p = NULL;
	int i;
	//malloc
	p = (void *)malloc(10);

	for (i = 0; i < 10; i++)
	{
		printf("%p ", &p[i]);	
	}

/*
 *    for (i = 0; i < 10; i++)
 *    {
 *        *((int *)p[i]) = rand() % 100;
 *    }
 *
 *    for (i = 0; i < 10; i++)
 *    {
 *        //printf("%d ", p[i]);
 *        printf("%p : %d\n", p + i, p[i]);
 *    }
 *    printf("\n");
 */
	return 0;
}
