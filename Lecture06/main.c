#include <stdio.h>
#include <conio.h>

void gotoxy(int x, int y) {
	printf("\033[%d;%dH", y, x);
}

int main() {
	gotoxy(2, 2);
	printf("input>");

	char c;
	int isLoop = 1;
	while (isLoop) {
		c = _getch();

	if(c >= '0')
			if (c <= '9')
			{
				printf("\033[2;8H%c", c);
				isLoop = 0;
			}
			else {
				printf("\033[3;2H���ڿ��� �Ұ����մϴ�.");
			}
		else {
			printf("\033[3;3H ��ȣ�� �Ұ����մϴ�.");
		}
	}
}