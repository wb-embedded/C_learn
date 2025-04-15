#define _CRT_SECURE_NO_WARNINGS
void hanoi(int n, char pos1, char pos2, char pos3)
{
	if (1 == n)
		move(pos1, pos3);
	else
	{
		hanoi(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		hanoi(n - 1, pos2, pos1, pos3);
	}
}