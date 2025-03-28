#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array_a = (int *)malloc(4 * sizeof(int *));
    int *array_b = (int *)malloc(4 * sizeof(int *));
    int x, y;
    int *plus = (int *)malloc(4 * sizeof(int *));

    printf("첫 번째 2x2 행렬 입력: \n");
    for(int x=0; x<4; x++) {
        scanf_s("%d", &array_a[x]);
    }

    printf("두 번째 2x2 행렬 입력: \n");
    for(int x=0; x<4; x++) {
        scanf_s("%d", &array_b[x]);
    }

    printf("행렬 덧셈 결과: \n");
    for(x=0; x<2; x++) {
        for(y=0; y<2; y++) {
            printf("%d ", plus[x * 2 + y] = array_a[x * 2 + y] + array_b[x * 2 + y]);
        }
        printf("\n");
    }
}