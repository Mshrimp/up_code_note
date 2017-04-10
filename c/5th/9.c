#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[128] = "hello";
	//"world"

	printf("buf = %s\n", buf);
	//strcat(buf + 5, "world" + 3);
	strncat(buf, "world", 3);
	printf("buf = %s\n", buf);//hellold

	//make mask
	// k = 107
	// s = 115
	printf("=================\n");
	printf("strcmp(make, mask) = %d\n", strcmp("make", "mask"));
	printf("strcmp(mask, make) = %d\n", strcmp("mask", "make"));
	printf("strcmp(make, make) = %d\n", strcmp("make", "make"));
	printf("strcmp(make, makee) = %d\n", strcmp("make", "makee"));
	printf("strncmp(make, mask, 2) = %d\n", strncmp("make", "mask", 2));

	return 0;
}
