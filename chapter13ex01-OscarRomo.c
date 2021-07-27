#include <stdio.h> /*Define the library*/
#define arr 5 /*Define the number of the values in the array*/
int main()
{
	int val[arr] = {2, 4, 5, 6, 8}; 
	int *xd; 
	for (xd = &val[0]; xd <= &val[arr]; ++xd) { /* xd is inicialited in the value 0, it finish when it reaches the number estableced in "arr"*/
		*xd = 0; 
	}
;
	for (int i = 1; i <= arr; ++i)  {
		printf("data[%d] = %d\n", i, val[i]); 
	return 0;
}
