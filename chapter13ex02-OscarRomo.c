#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *White(char *string); /*searches the first non-white character*/

int main()
{
	char string[] = "Enter the string here"; /*The string value*/ 

	printf("the following character is the first non-white character: '%c'\n", *White(string)); /*print what we found in the first non-space character*/

	return 0;
}

char *White(char *string) /*switch to function*/.
{
	while (*string != '\0') {
		if (! isspace(*string))
			return string; 
		++string;
	}

	return string;
}


