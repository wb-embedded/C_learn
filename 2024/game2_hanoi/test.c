#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "move.h"
#include "hanoi.h"

int main()
{
	hanoi(3, 'A', 'B', 'C');
	printf("\n");
	hanoi(4, 'A', 'B', 'C');

	return 0;
}