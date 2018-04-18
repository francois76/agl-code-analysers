#include <stdio.h>

int main(void)
{
	//Missing allocation :
	char* pStr = (char*) malloc(20);
	free(pStr);
	free(pStr);
    return 0;
}