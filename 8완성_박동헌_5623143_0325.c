/*
input array_a[2][2], input array_b[2][2]

THEN

int plus[2][2] = array_a[2] + array_b[2]
*/

#include <stdio.h>

int main() {
    int array_a[2][2];
    int array_b[2][2];
    int x, y;
    int plus[2][2];

    printf("첫 번째 2x2 행렬 입력: \n");
    for(int x=0; x<2; x++) {
        for(int y=0; y<2; y++) {
            scanf_s("%d", &array_a[x][y]);
        }
    }

    printf("두 번째 2x2 행렬 입력: \n");
    for(int x=0; x<2; x++) {
        for(int y=0; y<2; y++) {
            scanf_s("%d", &array_b[x][y]);
        }
    }

    printf("행렬 덧셈 결과: \n");
    for(x=0; x<2; x++) {
        for(y=0; y<2; y++) {
            plus[x][y]=array_a[x][y]+array_b[x][y];
            printf("%2d ", plus[x][y]);
        }
        printf("\n");
    }

    return 0;
}