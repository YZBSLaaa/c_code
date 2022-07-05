#define _CRT_SECURE_NO_WARNINGS 1
//包含一个叫stdio.h的文件，std-标准 standard input output
#include <stdio.h>
  //局部变量的生命周期:是进入作用域生命周期开始，出作用域生命周期结束
//全局变量的生命周期是：整个程序的生命周期，也是main函数的生命周期
int main()
{
	//声明extern外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}
//int main()
//{
//	int a = 20;
//	//局部变量的作用域是变量所在的局部范围
//	//全局变量作用域是整个工程
//	{
//		printf("num = %d\n", a);
//		//int a = 20;//它的作用域在这个括号里，不在大括号里，所以不能调用，如果把它放到这个括号外面就可以
//	}
//	
//	return 0;
//}
//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	//c语言语法规定，变量要定义在当前代码块的前面
//	int sum = 0;
//	//输入数据-使用输入函数scanf()
//	scanf("%d%d", &num1, &num2);//&是取地址符号
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	{
//		int a = 20;//局部变量顾名思义只能在局部使用，printf要写在同一个括号里,全局变量在哪都可以
//		printf("%d\n", a);
//	}
//		
//		
//	return 0;
//}
//当局部变量和全局变量的变量名称相同相同时，局部变量要优先（建议不要相同，容易误会，产生bug）
//int a = 20;//全局变量，在代码块（{}）外的变量
//int main()
//{
//	int a = 30;//局部变量定义在代码块内（{}）的变量
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	//数据类型的作用：向内存申请空间
//	short age = 20;//向内存申请两个字节=16个bit，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数，双精度浮点型数据变成单精度浮点型数据会丢失，要在数字后面加f
//
//}

//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4或8，sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//}
//main前面的int表示main函数调用返回一个整型值
//int main()//主函数—程序的入口—main函数有且仅有一个，程序从大括号开始运行
//{
	//printf("hello world\n");
//	return 0;//返回0
//}
//int main()
//{
//	//char ch = 'A';//向计算机要一个存储空间
//	//printf("%c\n", ch);//%c--打印字符格式的数据
//	//int age = 20;
//	//printf("%d\n", age);//%d-- 打印整型十进制数据
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	float f = 5.0;
//	printf("%f\n", f);
//
//	return 0;
//}

