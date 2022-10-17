#include<iostream>
using namespace std;
#include<string>

int area(int a) //函数的声明与定义；
{
	return a * a;
}

int area(int a, int b)  //重载
{
	return a + b;
}

int main()
{
	int b = 0;
	cout << "输入一个正方形的边长：" << endl;
	cin >> b;
	cout<<"正方形的面积是：" << area(b) << endl;
	return 0;
}