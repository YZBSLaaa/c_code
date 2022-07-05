#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];//书名
	short price;
};
int main()
{
	//利用结构体类型--创建一个该类型的结构体变量
	struct Book b1 = { "c语言程序设计",55 };
	strcpy(b1.name, "c++");//strcpy-string copy -字符串拷贝-库函数-string.h,所以要添加string.h的头文件
	printf("%s\n", b1.name);
	struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);//->的意思是pb指向的是b1的地址，就可以直接从pb里找到name
	//printf("%s\n", (*pb).name);//*pb就是解引用操作b1,找到b1的地址
	//printf("%s\n", (*pb).price);//结构体指针->成员
	//printf("书名：%s\n", b1.name);//结构体变量.成员
	//printf("价格：%d\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格%d\n", b1.price);
	return 0;
}
//int main()
//{
//	int a = 10;
//	//&a;//取地址
// p就是指针变量名，只要p前面加*就是指针
//	int* p = &a;//有一种变量是用来存放地址的-- 指针变量，p是存放a的地址的变量，int*是p的变量的类型
//	//printf("%p\n", p);//打印a的地址
//	//printf("%p\n", &a);
//	*p = 20;//*p是解引用操作符，用来查找a的地址，并把20赋值给a
//	printf("%d\n", a);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	
//}
//int main()
//{
//	//字符串的结束标志是'\0',它的ASCII码值是0，和数字0的值一样
//	//'0'这是字符0ASCII码是48
//	//EOF--end of file--文件结束标志，本质值为-1
//	//求两个数的最大值
//	//int a = 10;
//	//int b = 20;
//	//if (a > b)
//	//	printf("max = %d\n", a);
//	//else
//	//	printf("max = %d\n", b);
//	//return 0;
//	//第二种方法:
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	int max = MAX(num1, num2);
//	printf("max= %d\n", max);
//	return 0;
//
//}
//int main()
//{
	//int a = 10;
	//int arr[] = { 1,2,3,4,5,6 };//[]是下标引用操作符
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));
	////printf("%d\n", sizeof int);//errow
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof(arr));//计算的是数组的类型长度（字节）
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	////~对一个二进制按位取反
	//int a = 10;
	//int b = a++;//先使用，后++
	////printf("%d\n", a ,b);
	//int a = 2;//非0为真，就是1
	//int b = 3;
	//int c = a && b;//&&逻辑与--- 两个为真才为真，输出只有0或1
	//printf("%d\n", c);//1
	//int d = 2;//非0就为真，即1
	//int f = 0;//为假
	//int h = d || f;//只要有一个为真即为真
	//printf("%d\n", h);
	//return 0;
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//条件操作符，先判断问号亲密是否为真，如果为真则执行问号后面的表达式，为假则执行最后一个表达式
//	printf("%d\n", max);
//}
// 关键字
//register寄存器变量
//int 定义的变量是有符号的---signed int
// unsigned int num = 1;不管赋的值是正数还是负数，计算机都会把它看成正数
//int main()
//{
//	typedef unsigned int u_int;//类型重定义
//	u_int num2 = 20;//它与下面的意思是一样的
//	unsigned int num = 20;
//	return 0;
//
//}
//static 修饰函数，改变了函数的作用域 - 让静态的函数只能在自己所在的源文件内部使用，出了源文件就没法再使用了
//static 修饰函数改变了函数的链接属性，加了static就从外部连接属性变成了内部连接属性
//extern int Add(int, int);//声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//static 修饰全局变量，改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用了
//int main()
//{
//
//	extern int g_val;//extern - 声明外部符号的
//	printf("g_val = %d\n", g_val);
//	return 0;
//
//}
//void test()
//{
//	static int a = 1;//加了static a 就变成静态的局部变量，会保留原来的内存，延长了局部变量的生命周期
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//		return 0;
//	}
//}
//#define MAX 100;//定义标识符常量
//int main()
//{
//	int a = MAX;
//	return 0;
//
//}


