//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//用for循环在屏幕上打印1-10
//int main()
//{
	//int i = 0;
	//for (i = 1;//循环变量的初始化 i <= 10;//循环变量的判断部分 i++//循环变量的调整部分)
	//for (i = 1; i <= 10; i++)
	//{
		
		//if (i == 5)
			    // break;//条件满足直接跳出for循环
			//continue;//终止本次循环，之后语句不再执行，跳回变量判断部分
		//printf("%d ", i);
    // }  

	//int i = 0;
	//for (i = 1; i <= 10; i++)
		//不可以在for循环内部修改循环变量,防止for循环失去控制。
		//if(i = 5)
		//这个是错误的，若要打印haha，应改为：
	//{
		//if (i == 5)
			//printf("haha ");
		//printf("%d ", i);
	//}

		//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
		//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//int i = 0;
		//for (i = 0; i < 10; i++)
		// {
			//printf("%d ", arr[i]);
		// }
	//return 0;
//}


//for循环的变种1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.>
//int main()
//{
//	///for (;;)//死循环打印hehe
//	//for循环的初始化、判断、调整都可以省略，也可单独省略某一部分。但是要看情况省略，不能改变原来代码的意思，建议不要随便省略
//		//如果判断部分被省略，那判断条件就是恒为真
//	//{
//		//printf("hehe");
//
//	int i = 0;
//	int j = 0;
//	//for(i=0;i<10;i++)
//	for(;i<10;i++)//省略后只打印出十个hehe
//	{
//		//for (j = 0; j < 10; j++)
//		for(;j<10;j++)//省略改变了原来的意思，所以不能随便省略
//		{
//			printf("hehe\n");//i循环一次，j循环十次。总共100个hehe
//		}
//	}
//	return 0;
//}


//for循环的变种2
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//打印出两个hehe
//	}
//	return 0;
//}


//请问下面代码要循环几次？
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断部分k=0为直接赋值，且为0，所以为假，所以循环不进去，所以循环0次
//		k++;
//	return 0;
//}


//使用do...while循环屏幕上打印1-10
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//			//break;//终止循环，只打印1234
//		//continue;//打印1234，然后死循环判断
//		printf("%d ", i);
//		i++;
//	}
//		while (i <= 10);
//	return 0;
//}


//计算n的阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
	//for循环计算
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
		//ret = ret * i;
	//}
	//printf("%d\n", ret);

	//while循环计算
	/*int i = 1;
	int n = 0;
	scanf("%d", &n);
	int ret = 1;
	while (i <= n)
	{
		ret = ret * i;
		i++;
	}
	printf("%d\n", ret);
	return 0;
}*/


//计算1!+2!+3!+
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
	//用for循环计算
	/*int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{*/
		//int ret = 1;
		//for (i = 1; i <= n; i++)
		//{
			//ret = ret * i;   //屏蔽161-166，添加167-168，优化for循环
		//}
		//sum = sum + ret;
		/*ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);*/

	//用while循环计算
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	while (i <= 3)
//	{
//		ret = ret * i;
//			sum = sum + ret;
//			i++;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n
//编写int binsearch(int x, int v[], int n)
//功能:在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////int k = 17;
	//int i = 0;
	////写一个代码，在arr数组（有序的）中找到7
	//int sz = sizeof(arr) / sizeof(arr[0]);//求数组里边有多少个数字
	////sizeof()    求（）里面的字符占有多少字节
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("找到了，下标是：%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//	printf("找不到\n");

	//折半查找算法（二分查找算法）  要找log2 n次（取整）
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//		if (right < left)
//		{
//			printf("找不到\n");
//		}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//		int dim = (left + right) / 2;
//		if (arr[dim] > k)
//		{
//			right = right - 1;
//		}
//		else if (arr[dim] < k)
//		{
//			left = left + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", dim);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <string>
//int main()
//{
//	//welcome to bit!!!!!!
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	// ...
//	//welcome to bit!!!!!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;//左下标
//	//int right = sizeof(arr1) / sizeof(arr1[0]);//求数组的元素个数
//	//int right = sizeof(arr1) / sizeof(arr1[0])-1;//求最后一个非“\0”元素的下标（若数组里边是字符串，则这个方法是错误的
//	                                              //因为数组里边的字符串都隐藏了一个“\0”）
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//这个是正确的
//	//int right = strlen(arr1);//求arr1的长度，其实是求“\0”前面元素的个数
//	int right = strlen(arr1)-1;//右下标
//	//strlen():求字符串长度的，里边不包含“\0”
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//
//		Sleep(1000);//每打印一下停留1秒,需引用头文件#include <windows.h>
//		//system();//执行系统命令的一个函数
//		system("cls");//清空屏幕,需引用头文件#include <stdlib.h>
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，
//如果三次均输入错误，则退出程序）
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		//if (password == "123456")//错误的  //==不能用来比较两个字符串是否相等
		//应该使用一个库函数--strcmp(需引用头文件#include <string.h>)
	if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
		if(i==3)
		{
			printf("三次密码均错误，退出程序\n");
		}
		return 0;
}