#include <sys/syscall.h>
#include <unistd.h>

int main()
{
	syscall(335, "input.txt", "output");
	return 0;
}

