#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
    while (1)
    {
        printf("���Խ���60s��ػ�, ��������ȡ���ػ�\n���������� > :");
        scanf("%s", input);
     if (strcmp(input, "1223") == 0)
       {
          system("shutdown -a");
          break;
       }
    }
    return 0;
}