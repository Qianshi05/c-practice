#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char a[20]; // 假设名字不超过20个字符
    char b[20]; // 假设姓氏不超过20个字符
    printf("请输入你的名字：");
    scanf("%s %s", a,b); // 输入名字

    printf("%s %s\n", a, b); // 打印名字和姓氏在一行

    printf("%s\n%s\n", a, b); // 分别打印名字和姓氏在两行

    printf("%s ", a); // 打印名字
    printf("%s\n", b); // 打印姓氏，与上一个printf在同一行

    return 0;
}