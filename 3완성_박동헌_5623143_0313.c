#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("���ڿ��� �Է��ϼ���: "); //���Ƿ� 100 ����
    scanf_s("%[^\n]s", word); //�� �ٷ� ���ڿ� �Է� ����

    //���ڿ� ����
    int count = 0;
    for(int i = 0; word[i] != 0; i++) { //0���� ���ڿ� ������ �ݺ�
        count += 1;
    }
    printf("���ڿ��� ����: %d\n", count);

    //��ҹ���
    for(int i = 0; word[i] != 0; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32; //��ҹ��� ���̰� 32, �빮�ڸ� �ҹ��ڷ� ��ȯ�Ϸ��� +32
        } else if(word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 32; //��ҹ��� ���̰� 32, �빮�ڸ� �ҹ��ڷ� ��ȯ�Ϸ��� -32
        } else {
            printf("!!�Է� ����!!\n"); //�̿��� ���ڰ� �ԷµǾ��� ���
        }
    }
    printf("��ȯ�� ���ڿ�: %s", word);
    return 0;
}