// ʲô���ļ���
// �����ϵ��ļ����ļ��������ڳ�������У�����һ��̸���ļ������֣������ļ��������ļ�
// �����ļ�������Դ�����ļ�(��׺Ϊ.c)��Ŀ���ļ���(windows������׺Ϊ.obj)����ִ�г���(windows������׺Ϊ.exe)
// �����ļ����ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ��������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ�
// 
// �ļ�����
// һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ�������
// �ļ�������3���֣��ļ�·��+�ļ�������+�ļ���׺  ����C:\code\test.txt
// Ϊ�˷���������ļ���ʶ������Ϊ�ļ���

// �ļ����ͣ�
// �������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ���������ļ�
// �������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ�
// ���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII�ַ�����ʽ�洢���ļ������ı��ļ�

// һ���������ڴ�������ô�洢���أ�
// �ַ�һ����ASCII��ʽ�洢����ֵ�����ݼȿ�����ASCII��ʽ�洢��Ҳ����ʹ�ö�������ʽ�洢
// �磺����10000�������ASCII�����ʽ��������̣��������ռ��5���ֽ�(ÿ���ֽ�һ���ַ�)������������ʽ��������ڴ�����ֻռ4���ֽ�

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
/*int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf); // �����Ƶ���ʽд���ļ���
	fclose(pf);
	pf = NULL;
	return 0;
}*/


// �ļ�������
// ANSIC��׼���á������ļ�ϵͳ�����������ļ��ģ���ν�����ļ�ϵͳ��ָϵͳϵͳ�Զ������ڴ���Ϊ������
// ÿһ������ʹ�õ��ļ�����һ�顰�ļ��������������ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵������ϡ�
// ����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ�������뵽�ڴ滺����(����������)��Ȼ���ٴӻ���������ؽ������͵�����������
// (���������)���������Ĵ�С����C����ϵͳ������

// �ļ�ָ��
// �����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱
// ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ(���ļ������֣��ļ���״̬���ļ��ĵ�ǰ��λ�õ�)��
// ��Щ��Ϣ�Ǳ�����һ���ṹ������еģ��ýṹ����������ϵͳ�����ģ�ȡ��FILE
// ���磺vs2008���뻷���ṩ��stdio.hͷ�ļ��������µ��ļ���������
// struct _iobuf
// {
//		char* _ptr;
//		int _cnt;
//		char* _base;
//		int _flag;
//		int _file;
//		int _charbuf;
//		int _bufsiz;
//		char* _tmpfname;
// };
// typedef struct _ipbuf FILE;
// ��ͬ��C��������FILE���Ͱ��������ݲ���ȫ��ͬ����ʮ��ͬС�졣
// ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı�������������е���Ϣ��ʹ���߲��ع���ϸ�ڡ�
// һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı���������ʹ���������ӷ��㡣
// �������ǿ��Դ���һ��FILE*��ָ�������
// FILE* pf;//�ļ�ָ�����
// ����pf��һ��ָ��FILE�������ݵ�ָ�����������ʹpfָ��ĳ���ļ����ļ���Ϣ��(��һ���ṹ�����)��ͨ�����ļ���Ϣ���е���Ϣ���ܹ����ʸ��ļ���
//     Ҳ����˵��ͨ���ļ�ָ������ܹ��ҵ������������ļ���


//              �ļ��Ĵ򿪺͹ر�
// �ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ�
// �ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��
// ANSIC�涨ʹ��fopen���������ļ���fclose���ر��ļ���
// ���ļ��ĺ�����FILE* fopen ( const char* filename, const char* mode );  //filename���ļ���  mode���򿪷�ʽ  FILE* ����������
// �ر��ļ��ĺ�����int fclose ( FILE* stream ); // FILE* stream��ָ���ļ���Ϣ����ָ�룬��Ϣ������һ���ṹ�壬����ά���ļ���  int����������
// �򿪷�ʽ���£�
//   �ļ�ʹ�÷�ʽ                             ����                                           ���ָ���ļ�������
//    "r"(ֻ��)               Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�                              ����
//    "w"(ֻд)               Ϊ��������ݣ���һ���ı��ļ�                                  ����һ���µ��ļ�
//    "a"(׷��)               ���ı��ļ�β�������                                                  ����
//    "rb"(ֻ��)              Ϊ���������ݣ���һ���������ļ�                                      ����
//    "wb"(ֻд)              Ϊ��������ݣ���һ���������ļ�                                ����һ���µ��ļ�
//    "ab"(׷��)              ��һ���������ļ�β�������                                             ����
//    "r+"(��д)              Ϊ�˶���д����һ���ı��ļ�                                           ����
//    "w+"(��д)              Ϊ�˶���д������һ���µ��ļ�                                    ����һ���µ��ļ�
//    "a+"(��д)              ��һ���ļ������ļ�β���ж�д                                  ����һ���µ��ļ�
//    "rb+"(��д)             Ϊ�˶���д��һ���������ļ�                                           ����
//    "wb+"(��д)             Ϊ�˶���д���½�һ���µĶ������ļ�                              ����һ���µ��ļ�
//    "ab+"(��д)             ��һ���������ļ������ļ�β���ж���д                          ����һ���µ��ļ�

// ���ļ�test.txt
/*int main()
{
	// ���·��
	// .   ��ʾ��ǰ·��
	//fopen("test.txt", "w");
	// ..  ��ʾ��һ��·��
	//fopen("../text.txt", "w");
	// ../../  ��ʾ��һ��·������һ��·��
	//fopen("../../text.txt", "w");

	// ����·��
	//fopen("E:\\C���Խ���\\�ļ�����\\text.txt","w");
	return 0;
}*/

// ʹ�÷�����"w"(ֻд)   ���壺Ϊ��������ݣ���һ���ı��ļ�    ����ļ������ڣ�����һ���µ��ļ�
/*int main()
{
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// д�ļ�
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

// ʹ�÷�����"r"(ֻ��)     ���壺Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�     ���ֻ���ļ������ڣ�����
/*int main()
{
	FILE* pf = fopen("text.txt", "r"); // ֻ���ļ�text.txt
	if (pf == NULL)  // �ж��Ƿ�򿪳ɹ�
	{
		printf("%s\n", strerror(errno)); // ��ʧ��
		return 0;
	}
	// �򿪳ɹ�
	// ���ļ�
	printf("%c", fgetc(pf));  // b
	printf("%c", fgetc(pf));  // i
	printf("%c", fgetc(pf));  // t
	// �ر��ļ�
	fclose(pf); // �ͷŵ���Ϣ��������
	pf = NULL; // ��ָ����Ϣ����ָ���óɿ�ָ��
	return 0;
}*/

// �ļ���˳���д
//     ����             ������             ������
// �ַ����뺯��         fgetc            ����������
// �ַ��������         fputc            ���������
// �ı������뺯��       fgets            ����������
// �ı����������       fputs            ���������
// ��ʽ�����뺯��       fscanf           ����������
// ��ʽ���������       fprintf          ���������
// ����������           fread               �ļ�
// ���������           fwrite              �ļ�            
//

// �Ӽ�������
// �������Ļ
// ����&��Ļ�����ⲿ�豸

// ����-��׼�����豸-stdin
// ��Ļ-��׼����豸-stdout
// ��һ������Ĭ�ϴ򿪵��������豸 

// �Ӽ����������ַ�,����Ļ������ַ�
/*int main()
{
	int ch = fgetc(stdin); // �Ӽ����������ַ�
	fputc(ch, stdout); // ����Ļ������ַ�
	return 0;
}*/

// �Ӽ����������ı���,����Ļ�����ı���
/*int main()
{
	FILE* pf = fopen("text.txt", "r");
	char buf[1024] = { 0 };
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// ���ļ�
	fgets(buf, 1024,pf);
	printf("%s", buf);
	fgets(buf, 1024, pf);
	printf("%s", buf);
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	FILE* pf = fopen("text.txt", "w");
	char buf[1024] = { 0 };
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// д�ļ�
	fputs("hello\n", pf);
	fputs("world\n", pf);

	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	// �Ӽ��̶�ȡһ���ı���Ϣ
	char buf[1024] = { 0 };
	//fgets(buf, 1024, stdin); // �ӱ�׼��������ȡ
	//fputs(buf, stdout); // �������׼�����
	// �����д���ȼ��������д��
	gets(buf);
	puts(buf);
	return 0;
}*/

/*struct S
{
	int n;
	float score;
	char arr[10];
};*/
/*int main()
{
	struct S s = { 100,3.14f,"bit" };
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// ��ʽ������ʽд�ļ�
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/
/*int main()
{
	struct S s = {0};
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// ��ʽ������������
	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
	printf("%d %f %s", s.n, s.score, s.arr);
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/
/*int main()
{
	struct S s = { 0 };
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr); // �Ӽ������������������
	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);   // ����Ļ���������
	return 0;
}*/

// �Ա�һ�麯����
// scanf/fscanf/sscanf
// printf/fprintf/sprointf
// scanf/printf--����Ա�׼������/��׼������ĸ�ʽ������/������
// fscanf/fprintf--���������������/����������ĸ�ʽ������/������
// sscanf/sprintf��sscanf--�Ǵ��ַ����ж�ȡ��ʽ��������    sprintf--�ǰѸ�ʽ�����������(�洢��)�ַ���
/*struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = { 100,3.14f,"abcdef"};
	// �Ѹ�ʽ��������׼�����ַ����洢��buf
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	// ��buf�ж�ȡ��ʽ�������ݵ�tmp��
	struct S tmp = { 0 };
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
	return 0;
}*/

/*struct S
{
	char name[20];
	int age;
	double score;
};*/
/*int main()
{
	struct S s = { "����",20,55.6 };
	FILE* pf = fopen("text.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	 �����Ƶ���ʽд�ļ�
	fwrite(&s, sizeof(struct S), 1, pf);
	 �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	struct S s = {0};
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// �����Ƶ���ʽ���ļ�
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %.1f", s.name, s.age, s.score);
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
	return 0;
}*/

// �ļ��������д
// fseek�������ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
// int fseek(FILE* stream, long offset, int origin);
// FILE* stream���ļ�ָ��  long int offset��ƫ����   int origin���ļ�ָ��ĵ�ǰλ��
// ���ļ�ָ�����ʼλ�ã���ƫ�����������ļ�ָ��
// �ļ�ָ���λ�÷�Ϊ���֣�1.SEEK_CUR���ļ�ָ��ĵ�ǰλ��  2.SEEK_END���ļ���ĩβλ��   3.SEEK_SET���ļ�����ʼλ��
/*int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// 1.��λ�ļ�ָ��
	fseek(pf, 4, SEEK_CUR);
	// 2.��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);
	// 3.�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

// ftell�������ļ�ָ���������ʼλ�õ�ƫ����
// long int ftell( FILE* stream ):
/*int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// ������ļ�ָ���������ʼλ�õ�ƫ����
	fseek(pf, -2, SEEK_END);
	int ch = ftell(pf);
	printf("%d\n", ch);
	// 3.�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

// rewind�����ļ�ָ���λ�ûص��ļ�����ʼλ��
// void rewind(FILE* stream);
/*int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int ch = fgetc(pf); //��ȡһ���ַ�֮���ļ�ָ����Զ�ָ����һ���ַ�
	printf("%c\n", ch);
	rewind(pf); // ʹ�ļ�ָ�뷵�ص��ļ�����ʼλ��
	ch = fgetc(pf);
	printf("%c\n", ch);
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

// �ļ��������ж�
// ������ʹ�õ�feof
// �μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ����
// ����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
// 1.�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF(fgetc),����NULL(fgets)
//   ���磺<1> fgetc�ж��Ƿ�ΪEOF
//		   <2> fgets�жϷ���ֵ�Ƿ�ΪNULL
// 2.�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
//   ���磺fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
/*int main()
{
	// feof(); //EOF -- enf of file -- �ļ�������־
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int ch = fgetc(pf);
	printf("%d\n", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}*/

int main()
{
	int c; // ע�⣺int����char��Ҫ����EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	// fgetc ����ȡ��ʱ��������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(fp) != EOF)) // ��׼C I/O��ȡ�ļ�ѭ��
	{
		putchar(c);
	}
	// �ж���ʲôԭ�������
	if (ferror(fp))
	{
		puts("I/O error when reading");
	}
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
	fp = NULL;
	return 0;
}