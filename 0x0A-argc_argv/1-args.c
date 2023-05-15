#include <stdio.h>
#include "main.h"

/**
 *@argc: The number of arguments
 *
 *@argv: The input argument
 *
 *Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
        printf("%d\n", argc-1);
        return 0;
}
