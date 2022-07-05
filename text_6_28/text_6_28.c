#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//int arr[10] = { 0 };
	//int sz = 0;

	//printf("%d\n", sizeof(arr));//siazeof计算的是变量所占内存的大小，单位是字节
	//sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数；个数=数组总大小/每个元素的大小
	//printf("%d\n", sz);
	//return 0;
	//c语言中表示真假
	//0 -假
	//非0为真
	int a = 2;
	printf("%d\n", a);
	printf("%d\n", !a);//!取反
	return 0;
}
//(2进制）位操作
// & 按位与
// |  按位或
// ^  按位异或
//int main()
//{
//	//int a = 3;//二进制为011
//	//int b = 5;//二进制为101
//	//int c = a & b;//&两个为1才为1，否则为0
//	//printf("%d\n", c);
//	
//		int a = 3;
//		int b = 5;
//		/*int c = a | b;
//		printf("%d\n", c);
//		return 0;*/
//		int c = a ^ b;//异或计算规律：1.对应的二进制位相同则位0；2.对应的二进制位不同则为1
//		printf("%d\n", c);
//	
//	
//
//}
//int main()
//{//赋值操作符：=   +=   -=   /=    &=   ^=   |=   >>=    <<=
//	int a = 10;
//	a = a + 10;//=是赋值，==是判断相等
//	a += 10;//与上面意思一样
//	return 0;
//}
//操作符
//int main()
//{//右移符号>>
//	int a = 1;
//	int b = a << 1;//  <<左移符号，他的二进制数向左移动一位,00000000000000000000000000000001
//	printf("%d\n", b);
//	return 0;
//}

//数组：能够存储一组相同类型的元素的集合
//int main()
//{
//	////int arr[10];//定义一个存放10个整数数字的数组
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//
//	int i = 0;
//	//printf("%d\n", arr[5]);//用下标的方式访问元素，下标从0开始
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i<10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
	//char ch[20];
	//float arr2[25];
//	return 0;
//}
//自定义函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	
//	sum = Add(num1, num2);
//	//sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//}
//int main()
//{
//	int input = 0;
//
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//库函数
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//int main()
//{
//	3;//字面常量
//	//const常属性，想要某值不能改变时，加const即可
//	//此时num就是const修饰的常变量，但本质还是变量
//	const int num = 4;
//	printf("%d\n", num);
//	/*num = 8;*/
//	printf("%d\n", num);
//}

//#define MAX 10//#define 定义的标识符常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}
//4.枚举常量:可以一一列举
//枚举关键字-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET- 枚举常量
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n",s );//0
//	//printf("%d\n", FEMALE);//1
//	//printf("%d\n", SECRET);//2
//	return 0;
//}
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color c = YELLOW;
//	printf("%d\n", c);
//	return 0;
//}


//字符串+转义字符+注释
//1.字符串
//int main()
//{
//	"helloworld";//由双引号引起的叫字符串
//	"abc";
//	return 0;
//}
//int main()
//{	//由双引号引起来的一串字符叫字符串，字符串的结束标志是一个\0的转义字符，它不能算作内容，隐藏在字符串末尾
//	char arr1[] = "abc";//数组 -- "abc"---'a','b','c','\0',这里的\0表示字符串的结束标志
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}
/*
int main()
{//转义字符
	//  \\--还可以是个转义斜杠，让\是一个普通下斜杠
	//printf("c:\test\32\test.c");
	printf("c:\\test\\32\\test.c");
	//printf("%s\n", """);
		printf("%s\n", "\"");
		printf("%d\n", strlen("c:\test\32\test.c"));//13,因为\32和\t被分别看作是一个字符
		printf("%c\n", '\32');//\32表示两个八进制数，它等于3*8^1+2*8^0=26(26是十进制），作为ASCII码值代表的字符
		printf("%c\n", '\x61');//  \x61表示的是十六进制数，它等于6*16^1+1*16^0=97,作为ASCII码值代表的字符a
	//\t--tab键
	//\?--在书写连续多个问号时使用，防止他们被解析成三字母词
	//char arr1[] = "abc";//3
	//char arr2[] = { 'a', 'b', 'c' };//随机值，它会一直找直到找到\0为止
	//printf("%d\n", strlen(arr1));//strlen--string length(数值长度）,

	//printf("%d\n", strlen(arr2));
	return 0;

}
*/