// ö�٣��ѿ��ܵ�ȡֵһһ����
// ö�����͵Ķ���
/*enum Day // enum���ؼ���  Day��ö��������
{        // {}������ǣ�ö�ٵĿ���ȡֵ��ö�ٳ�����
	Mon,  // 0
	Tues, // 1
	Wed,  // 2
	Thur, // 3
	Fri,  // 4
	Sat,  // 5
	Sun   // 6
};
enum Sex //�Ա�
{
	// Ĭ��Ϊ0,1,2��������
	// ��Ĭ�ϵ�ȡֵ�����ʣ�����Ը�������һ����ʼֵ�����£�
	MALE = 2,   // 2
	FEMALE = 4, // 4
	SECRET = 8  // 8
};
enum Color
{
	RED,       // 0
	GREEN = 4, // 4
	BLUE       // 5   
};*/
/*#define RED 0
#define GREEN 4
#define BLUE 5*/
/*#include <stdio.h>
int main()
{
	enum Sex s = MALE;// ֻ�ܸ�ֵ����ȡֵ��ֵ
	enum Day c = Wed;
	printf("%d %d %d %d %d %d %d\n", Mon, Tues, Wed, Thur, Fri, Sat, Sun);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	printf("%d %d %d\n", RED, GREEN, BLUE);
	return 0;
}*/

// ö�ٵĴ�С����4���ֽ�
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
#include <stdio.h>
int main()
{
	enum Sex s = MALE;
	printf("%d\n", sizeof(s));
	return 0;
}

// ö�ٵ��ŵ�
// ���ǿ���ʹ��#define ���峣����Ϊʲô��Ҫʹ��ö�٣�ö�ٵ��ŵ㣺
// 1.���Ӵ���Ŀɶ��ԺͿ�ά����
// 2.��#define ����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
// 3.��ֹ��������Ⱦ����װ��
// 4.���ڵ���
// 5.ʹ�÷��㣬һ�ο��Զ���������

// ö�ٵ�ʹ��
/*enum Color
{
	RED,
	GREEN = 4,
	BLUE
}; 
#include <stdio.h>
int main()
{
	enum Color c = RED;
	return 0;
}*/



