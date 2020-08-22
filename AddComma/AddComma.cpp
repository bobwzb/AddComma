// AddComma.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
void func1(int a[]) {
	for (int i = 0; i < 6; i++) {
		printf(",%d" + !i, a[i]);
	}
	printf("\n");
}
void func2(int a[]) {
	printf("%d", a[0]);
	for (int i = 1; i < 6; i++) {
		printf(",%d" + !i, a[i]);
	}
	printf("\n");
}
void func3(int a[]) {
	for (int i = 0; i < 6; ++i)
		printf("%d,", a[i]);
	printf("\b ");
	printf("\n");
}
int main()
{
	int a[6] = { 1, 2, 3, 4, 5, 6 };
	func1(a);
	func2(a);
	func3(a);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
