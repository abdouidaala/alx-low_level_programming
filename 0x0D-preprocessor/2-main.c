#include <unistd.h>
#include <string.h>

int main(void)
{
	write(1, __FILE__, strlen(__FILE__));
	return (0);
}
