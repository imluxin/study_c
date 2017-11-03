#include <stdio.h>  // <> system contain

//#include "max.c" // "" file in current folder
//#include "max.o"

#include "max.h"
#include "min.h"

int main()
{
	int a1 = 33;
	int a2 = 21;

	int maxnum = max(a1, a2);
	int minnum = min(a1, a2);	

	printf("the max number is %d \n", maxnum);
	printf("the min number is %d \n", minnum);	

	return 0;
}





