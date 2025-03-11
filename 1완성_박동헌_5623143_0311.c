#include <stdio.h>

int main() {
    int num;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    printf("�Էµ� ������ 32��Ʈ ǥ�� : ");
    for (int i = 31; i >= 0; i--) {
        int change = num >> i & 1;
        printf("%d", change);
    }
}

/**/