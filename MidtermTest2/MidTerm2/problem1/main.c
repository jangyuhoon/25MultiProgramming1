#include <stdio.h>

int PassOrFail(int score)
{
    if (score >= 50) {
        return 1;  // 통과
    }
    else {
        return 0;  // 실패
    }
}

int main()
{
    int score;

    printf("점수를 입력하세요: ");
    scanf_s("%d", &score);

    if (PassOrFail(score)) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다\n");
    }

    return 0;
}