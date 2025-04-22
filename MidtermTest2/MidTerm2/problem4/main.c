#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	char hc;

	printf("           \033[33mo\033[0m     \033[33mo\033[0m\n");
	printf("           \033[34m|\033[0m     \033[32m|\033[0m\n");
	printf("   -----------------------\n");
	printf("   |\033[45m\033[37m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\033[0m|\n");
	printf("   |\033[47m                     \033[0m|\n");
	printf("   -----------------------\n");
	printf("-----------------------------\n");
	printf("|\033[45m\033[37m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\033[0m|\n");
	printf("|\033[47m                           \033[0m|\n");
	printf("-----------------------------\n");

	ch = _getch();

	if (ch == 'H' || ch == 'h') {
		printf("            \033[45mHappy\033[0m\n");
	}

	hc = _getch();

	if (hc == 'H' || hc == 'h') {
		printf("          \033[47m\033[30mBirthday\033[0m\n");
	}

	return 0;
}