#include <stdio.h>
/**
  *main - Prints the name of the function
  *
  *@argc: The size of the arg passed
  *
  *@argv: The argument passed
  *
  *Return: The name of the task
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	printf("%s\n", argv[0]);
	return (0);
}
