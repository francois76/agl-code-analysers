#include <stdio.h>

int main(void)
{
	//Uninitialized Memory Access :
	char *pStr = (char*) malloc(512);
	char c = pStr[0];
	func();
    return 0;
}

void func()
{
	int a;
	int b = a * 4;
}