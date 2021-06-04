#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//# define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', 0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("enter into bt\n");
//	printf("do you want to study hard?(1/0)>:");
//	scanf("%d\n, &input");
//
//	if (input == 1)
//		printf("get a good offer.\n");
//	else
//		printf("go to sell the sweet root.\n");
//	return 0;
//
//}//有问题，但不知道为什么？**************************************

//int main()
//{
//	int line = 0;
//	printf("Enter into BT\n");
//	while (line < 200)
//	{
//		printf("tap one line code: %d\n", line);
//		line++;
//	}
//	printf("Get a good offer");
//	return 0;
//}

// 函数
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("put in two numbers:>");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = % d\n", sum);
	return 0;
}


