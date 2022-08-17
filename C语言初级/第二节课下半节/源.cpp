//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组//数字的下标从零开始
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//下标的方式访问元素
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.>
//#include <stdio.h>
//int main()
//{
	//int a = 5 % 2;//取模（输出余数，若是/则输出商）
//	int a = 5/2;
//	printf("%d\n", a);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//    //移位(2进制数)操作符
//	//<<左移：>>右移
//	int a = 1;
//	//整型1占4个字节，32个bit位
//	//00000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.>
//int main()
//{
//	//位（2进制位）操作符
//	//&按位与（有0为0）
//	//|按位或（有1为1）
//	//^按位异或（对应二进制位相同为0，反之为1）
//	int a = 3;//011
//	int b = 5;//101
//	    //按位与001
//	    //按位或111
//	  //按位异域110
//
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	int a = 10;
//	a = 20;//一个=叫赋值，两个=叫判断
//	a = a + 10;//1(1和2同一个意思)
//	a += 10;//2
//	a = a - 20;//3(3和4同一个意思）
//	a -= 20;//4
//	a = a & 2;//5（5和6同一个意思）
//	a &= 2;//6
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+双目操作符
//	////C语言中，0表示假，1表示真
//	//int a = 1;
//	//printf("%d\n", a);
//	//printf("%d\n", !a);//!的意思是把真变成假，把假变成真
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	//int a = 10;
//	////sizeof 计算的是变量或类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//与上面的等价
//	//printf("%d\n", sizeof a);//与上面等价
//	int arr[10] = { 0 };//10个整型元素的数组
//	//10*sizeof(int)=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[10]);
//	printf("%d\n", sz);
//	return 0;
//}

