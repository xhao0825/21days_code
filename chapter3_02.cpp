#include<iostream>   
using namespace std;  
#include<string>

int main()  
{
	//常量的学习
	//字面常量
	123;
	//const常量
	int a = 5;
	const int b = 10;//用于固定变量的值，不给修改；
	//b = 2; 不可修改
	//enum常量
	enum week
	{
		monday,
		tuesday,
		wednesday,
	};
	cout<<monday<<endl;
	//#define常量
#define Pi  5;
	return 0;
}