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
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("put in two numbers:>");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = % d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int f (int m, int n) 
//{
//	while (m != n) {
//		if (m > n) {
//			m = m - n;
//		}
//		else {
//			n = n - m;
//		}
//	}
//	return m;
//}

//int main(void) {
//	printf("%d\n", f(30, 18));
//	return 0;
//}//6
//
//insertionSort(A):
//	input aray A[0..n-1] of n elements
//	for all i = 1..n-1 do
//		element = A[i], j = i - 1
//		while j >= 0 and A[j] > element do
//			A[j+1] = A[j]
//			j = j-1
//	end while 
//	A[j + 1] = element
//end for 

//int main()
//{
//	int num = 3;
//	printf(" The cube of %d is %d.\n", num, num * num * num);
//	return 0;
//}//The cube of 3 is 27.


// The uses of \" if you need to print \ then we need \\
//int main()
//{
//	char id = 'z';
//	int num = 1234567;
//	printf("Your \"login ID\" will be in the form of %c%d.\n", id, num);
//	return 0;
//}//Your "login ID" will be in the form of z1234567.

//int main()
//{
//	int a = 1;
//	int b = 5;
//	while (a < b) {
//		a++;
//		b--;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 5;
//	while ((a += 2) < b) {
//		b--;
//	}
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i < 10; i++) {
//		printf(" % d % d\n", 1, i * i);
//	}
//	return 0;
//}
//1  1
//1  4
//1  9
//1  16
//1  25
//1  36
//1  49
//1  64
//1  81

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{printf("%d ", arr[i]);
//	i++;
//}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}//4
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//
//}//1

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//
//}//7

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;

//}//6

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	return 0;
//}//40
////4
////sz = 10

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before change: a = %d b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after change: a = %d b = %d\n", a, b);
//	return 0;
//}//before change: a = 3 b = 5
////after change : a = 5 b = 3

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before change: a = %d b = %d\n", a, b);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after change: a = %d b = %d\n", a, b);
//	return 0;
//}//before change: a = 3 b = 5
////after change : a = 5 b = 3

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("before change: a = %d b = %d\n", a, b);
//
//	c = a;
//	a = b;
//	b = c;
//	printf("after change: a = %d b = %d\n", a, b);
//	return 0;
//}//before change: a = 3 b = 5
////after change : a = 5 b = 3

//Leetcode 136

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//			int j = 0;
//			for (j = 0; j < sz; j++)
//			{
//				if (arr[i] == arr[j])
//					count++;
//			}
//			if (count == 1)
//			{
//				printf("The single number is : % d\n", arr[i]);
//				break;
//			}
//	}
//
//	return 0;
//}//The single number is :  5

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sz);
//
//	return 0;
//}// 36 4 9
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("The single number is : % d\n", ret);
//	
//	return 0;
//}// The single number is :  5

#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("Be careful, your computer will be shutdown within 1 min, enter: I'm KT, to cancel the order\n");
//		scanf("%s", input);
//		if (strcmp(input, ("I'm KT") == 0))
//			system("shutdown -a");
//		else
//		{
//			goto again;
//		}
//	return 0;
//}// 可以关机但不会跑again. 弹幕说是again 没有定义

//int main()
//{
//	char arr[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr));
//	return 0;
//}//19

//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}//7

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("The bigger num is %d\n", num1);
//	else
//		printf("The bigger num is %d\n", num2);
//	return 0;
//}//The bigger num is 20

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		printf("The bigger num is %d\n", num1);
//	else
//		printf("The bigger num is %d\n", num2);
//	return 0;
//}//The bigger num is 20

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 20;
//	int num2 = 10;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}// max = 20

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	max = Max(num1, num2);
//	scanf("%d%d", &num1, &num2);
//	printf("max = %d\n", max);
//	return 0;
//}// 20 10
// // max = 20

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}// -1

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a = %d\n b = %d\n", a, b);
//	return 0;
//}
////a = 11
////b = 10

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a = %d\n b = %d\n", a, b);
//	return 0;
//}
////a = 11
////b = 10
//
//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}//a = 9 b = 10

int main()
{
	int a = 10;
	int b = --a;
	printf("a = %d b = %d\n", a, b);
	return 0;
}//a = 9 b = 9

