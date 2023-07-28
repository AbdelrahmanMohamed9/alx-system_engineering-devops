#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - that create a infinite loop.
 * Return: that return 0
 */
int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - that entry point.
 * Return: that retuen always 0 .
 */
int main(void)
{
	int n;

	for (n = 0; n < 5; n++)
	{
		if (fork() == 0)
		{
			dprintf(1, "Zombie process created, PID: %d\n", getpid());
			return (0);
		}
	}
	return (infinite_while());
}
