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

    printf("ù ��° 2x2 ��� �Է�: \n");
    for(int x=0; x<2; x++) {
        for(int y=0; y<2; y++) {
            scanf_s("%d", &array_a[x][y]);
        }
    }

    printf("�� ��° 2x2 ��� �Է�: \n");
    for(int x=0; x<2; x++) {
        for(int y=0; y<2; y++) {
            scanf_s("%d", &array_b[x][y]);
        }
    }

    printf("��� ���� ���: \n");
    for(x=0; x<2; x++) {
        for(y=0; y<2; y++) {
            plus[x][y]=array_a[x][y]+array_b[x][y];
            printf("%2d ", plus[x][y]);
        }
        printf("\n");
    }

    return 0;
}