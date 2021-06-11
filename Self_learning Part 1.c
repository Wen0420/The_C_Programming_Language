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

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while (i < 10)
	{printf("%d ", arr[i]);
	i++;
}

	return 0;
}












