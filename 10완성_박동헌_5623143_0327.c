#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array_a = (int *)malloc(4 * sizeof(int *));
    int *array_b = (int *)malloc(4 * sizeof(int *));
    int x, y;
    int *plus = (int *)malloc(4 * sizeof(int *));

    printf("ù ��° 2x2 ��� �Է�: \n");
    for(int x=0; x<4; x++) {
        scanf_s("%d", &array_a[x]);
    }

    printf("�� ��° 2x2 ��� �Է�: \n");
    for(int x=0; x<4; x++) {
        scanf_s("%d", &array_b[x]);
    }

    printf("��� ���� ���: \n");
    for(x=0; x<2; x++) {
        for(y=0; y<2; y++) {
            printf("%d ", plus[x * 2 + y] = array_a[x * 2 + y] + array_b[x * 2 + y]);
        }
        printf("\n");
    }
}