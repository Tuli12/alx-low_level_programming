#include <unistd.h>
/*putchar main file*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
