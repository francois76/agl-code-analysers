#include <stdio.h>

int main(void)
{
	//Mismatched Allocation/Deallocation :
	char *s = (char*) malloc(5);
	delete s;
    return 0;
}