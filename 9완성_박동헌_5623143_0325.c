/* 
정수 개수 입력
해당 정수만큼 배열 저장
오름차순으로 배열에 저장하는 연산
출력
*/

#include <stdio.h>

int main() {
    int x, y, number, temp;
    int array[100];

    printf("정수의 개수를 입력하세요: ");
    scanf_s("%d", &number);

    printf("%d개의 정수를 입력하세요: \n", number);
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

    printf("오름차순으로 정렬된 정수들: \n");
    for(x=0; x<number; x++) {
        printf("%d ", array[x]);
    }

    return 0;
}