/* 
���� ���� �Է�
�ش� ������ŭ �迭 ����
������������ �迭�� �����ϴ� ����
���
*/

#include <stdio.h>

int main() {
    int x, y, number, temp;
    int array[100];

    printf("������ ������ �Է��ϼ���: ");
    scanf_s("%d", &number);

    printf("%d���� ������ �Է��ϼ���: \n", number);
    for(x=0; x<number; x++) {
        scanf_s("%d", &array[x]);
    }

    for(x=0; x<number; x++) {
        for(y=x; y<number; y++) {
            if(array[x] > array[y]) {
                temp = array[x];
                array[x]=array[y];
                array[y]=temp;
            }
        }
    }

    printf("������������ ���ĵ� ������: \n");
    for(x=0; x<number; x++) {
        printf("%d ", array[x]);
    }

    return 0;
}