// ����          ������Ĳ����������������ͷ�����
// iscntrl       �κο����ַ�
// isspace       �հ��ַ����ո�''����ҳ'\f'������'\n'���س�'\r'���Ʊ��'/t'���ߴ�ֱ�Ʊ��'\v'
// isdigit       ʮ��������0-9
// isxdigit      ʮ���������֡���������ʮ�������֣�Сд��ĸa-f����д��ĸA-F
// islower       Сд��ĸa-z
// isupper       ��д��ĸA-Z
// isalnum       ��ĸ�������֣�a-z,A-Z,0-9
// ispunct       �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
// isgraph       �κ�ͼ���ַ�
// isprint       �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
//ȫ����Ҫ����ͷ�ļ�#include <ctype.h>
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	//�����ж�ch��ֵ�Ǵ�д����Сд��ĸ
//	char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//
//}

// int tolower(int c)        ��дתСд
// int toupper(int c)        Сдת��д 
//()������ʲô���ͷ��ص�ֵ����ʲô����
//��Ҫ����ͷ�ļ�#include <ctype.h>
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char ch = tolower('Q');
//	//char ch = toupper('q');
//	putchar(ch);
//	return 0;
//}

//����I Am A Student��ȫ����д��Сд��ĸ
#include <stdio.h>
#include <ctype.h>
int main()
{
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}
