#include <stdio.h>

int PassOrFail(int score)
{
    if (score >= 50) {
        return 1;  // ���
    }
    else {
        return 0;  // ����
    }
}

int main()
{
    int score;

    printf("������ �Է��ϼ���: ");
    scanf_s("%d", &score);

    if (PassOrFail(score)) {
        printf("����� �����ϴ�!\n");
    }
    else {
        printf("����� �ֽ��ϴ�\n");
    }

    return 0;
}