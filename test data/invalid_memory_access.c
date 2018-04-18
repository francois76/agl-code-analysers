#include <stdio.h>

int main(void)
{
	//Invalid Memory Access :
	char *pStr = (char*) malloc(25); 
	free(pStr); 
	strcpy(pStr, "test");
    return 0;
}