#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char a[20]; // �������ֲ�����20���ַ�
    char b[20]; // �������ϲ�����20���ַ�
    printf("������������֣�");
    scanf("%s %s", a,b); // ��������

    printf("%s %s\n", a, b); // ��ӡ���ֺ�������һ��

    printf("%s\n%s\n", a, b); // �ֱ��ӡ���ֺ�����������

    printf("%s ", a); // ��ӡ����
    printf("%s\n", b); // ��ӡ���ϣ�����һ��printf��ͬһ��

    return 0;
}