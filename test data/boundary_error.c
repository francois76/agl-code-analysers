#include <stdio.h>

int main(void)
{
	//Boundary error
	int *v;
	int a = 24;
	v=new int[a];
	v[30]=2;
    return 0;
}