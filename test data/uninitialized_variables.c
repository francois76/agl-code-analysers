#include <stdio.h>

int main(void)
{
	//Uninitialized variables
	int count;
	while(count<100)
	{
	  cout<<count;
	  count++;
	}
    return 0;
}