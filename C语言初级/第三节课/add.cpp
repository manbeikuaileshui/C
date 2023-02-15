//int g_val = 2020;//全局变量
//static g_val = 2020;//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用了

//定义一个函数
//int add(int x, int y)
//static int add(int x, int y)//static修饰的函数改变了函数的链接属性（外部链接属性--->内部链接属性）
//{
//	int z = x + y;
//	return z;
//}