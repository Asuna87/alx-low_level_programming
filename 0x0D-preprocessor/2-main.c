#include <stdio.h>

/**
* main - Entry point of the program
*
* Description:
* This function serves as the entry point of the program. It prints the name
* of the source file it was compiled from using the __FILE__ macro and returns
* 0 to indicate successful execution.
*
* Return:
* Always returns 0 to signify successful execution.
*/
int main(void)
{
/* Print the name of the current source file */
printf("%s\n", __FILE__);

/* Return 0 to indicate successful execution */
return (0);
}

