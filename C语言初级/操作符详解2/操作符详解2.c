#define _CRT_SECURE_NO_WARNINGS 1
//�߼���������&&(�߼��룺�м����)��||���߼����������棩  0Ϊ�٣���0Ϊ��
//#include <stdio.h>
//int main()
//{
//int i = 0, a = 0, b = 1, c = 2;
//	int d = a && b;
//	int e = b && c;
//	int f = a && i;
//	int q = a || b;
//	int t = b || c;
//	int y = a || i;
//	printf("%d %d %d %d %d %d\n", d, e, f, q, t, y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//1 2  3 4
//	//i = a++ || ++b || d++;//1 3 3 4
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//��������������Ŀ����������exp1 �� exp2 �� exp3 //�����ʽ1Ϊ�棬ִ�б��ʽ2�����ʽ2�Ľ�����������ʽ�Ľ����
                          //expΪ���ʽ          //�����ʽ1Ϊ�٣�ִ�б��ʽ3�����ʽ3�Ľ�����������ʽ�Ľ��.
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//   /* if (a > 5)
//        b = 3;
//    else
//        b = -3;*/
//
//    b = (a > 5 ? 3: - 3);
//    printf("%d\n", b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = 0;
//   /* if (a > b)
//        max = a;
//    else
//        max = b;*/
//
//    max = (a > b ? a : b);
//    printf("max=%d\n", max);
//    return 0;
//}


//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ exp1��exp2��exp3������expn.������������ִ�У��������ʽ�Ľ�������һ�����ʽ�Ľ��
//#include <stdio.h>
//int main()
//{
 //����1
    //int a = 1;
    //int b = 2;
    //int c = (a > b, a = 10 + b, a, b = a + 1);//13
    //printf("%d\n", c);
    //return 0;
//����2
    //int a = 1;
    //int b = 2;
    //int c = 4;
    ////if (a = b + 1, c = a / 2, c > 0)
    //if (a = b + 1, c = a / 2, c > 2)
    //{
    //    printf("hehe\n");
    //}
    //else
    //{
    //    printf("haha\n");
    //}
    //return 0;

//����3
//    a = get_val();
//    count_val(a);
//    while (a > 0)
//    {
//        //ҵ����
//        a = get_val;
//        count_val(a);
//    }
//    //��д
//    while (a = get_val, count_val, a > 0)
//    {
//        //ҵ����
//    }
//}

//�ṹ��Ա��.(�ṹ��.��Ա������->���ṹ��->��Ա����
//#include <stdio.h>
////����һ���ṹ������--struct Stu
//struct Stu //����һ��ѧ��
//{
//    //��Ա����
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    struct Stu s1 = { "����",20,"2019010305" };//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//   /* printf("%s\n", s1.name);
//    printf("%d\n", s1.age);
//    printf("%s\n", s1.id);*/
//         //�ṹ�����.��Ա��
//    
//    struct Stu* ps = &s1;
//    /*printf("%s\n", (*ps).name);
//    printf("%d\n", (*ps).age);
//    printf("%s\n", (*ps).id);*/
//    printf("%s\n", ps->name);
//    printf("%d\n", ps->age);
//    printf("%s\n", ps->id);
//         //�ṹ��ָ��->��Ա��
//    return 0;
//}


//��ʽ����ת��
//#include <stdio.h>
//int main()
//{
//    char a = 3;//char��һ���ֽڣ�8��bit
////��int a���� = 3 = 00000000000000000000000000000011
////��char a���� = 3 = 00000011 
////����������char a)�� = 00000000000000000000000000000011
//    char b = 127;
////��int b���� = 127 = 00000000000000000000000001111111
////��char b���� = 127 = 0111111
////����������char b)�� = 00000000000000000000000001111111
//    char c = a + b;
////(int c)�� = 00000000000000000000000000000011 + 00000000000000000000000001111111 = 00000000000000000000000010000010
////��char c)�� = 10000010 
//// (int c)�� = 11111111111111111111111110000010
////(int c)ԭ =  10000000000000000000000001111110 = -126
//    printf("%d\n", c);
//    return 0;
//}
//ʵ��1
#include <stdio.h>
int main()
{

    char a = 129;//�����128
    short b = 65537;//�����65536
    int c = 5;
    if (a == 129)
        printf("a");
    if (b == 65537)
        printf("b");
    if (c == 5)
        printf("c");
}
//ʵ��2
//#include <stdio.h>
//int main()
//{
//    char c = 1;
//    printf("%u\n", sizeof(c));//1
//    printf("%u\n", sizeof(+c));//4(cֻҪ������ʽ���㣬�ͻᷢ���������������ʽ+c���ͻᷢ������������sizeof��+c����4���ֽ�
//    printf("%u\n", sizeof(!c));//1
//    return 0;
//}