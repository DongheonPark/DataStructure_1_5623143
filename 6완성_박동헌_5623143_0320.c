/*
    ���� �ڵ忡�� ������ �����δ� �������� �����߽��ϴ�. �������� a�� b�� ǥ���Ͽ� �����ϴµ��� �ټ� �����ϴ����� ����Դϴ�.
    �̸� �ذ��ϱ� ���� ����ڷκ��� �Է¹��� ������ ������ �����ϴ� ���� a�� real��, �Ҽ����� �Ǻ��ϱ� ���� �����ϴ� ���� �ǹ��ϴ� ���� b�� plus�� �ٲپ����ϴ�.
*/

#include <stdio.h>

int main() {
    int number, real, plus;

    printf("���� n�� �Է��ϼ���: ");
    scanf_s("%d", &number);

    printf("%d ������ �Ҽ�: ", number);
    
    for(real = 2; real <= number; real++) { // O(n) ���� �����߽��ϴ�.
        for(plus = 2; plus < real; plus++) { // O(n) ���� �����߽��ϴ�. �ռ� O(n)�� �־��⿡ �ڵ� ��ü�����δ� O(n^2)�� �� �� �����ϴ�.
            if( real % plus == 0) {
                break;
            }
        }
        if(real == plus) {
            printf("%d ", real);
        }
    }

    return 0;
}