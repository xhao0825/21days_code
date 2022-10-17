#include<iostream>   
using namespace std;  
#include<string>
int f = 10;//定义一个全局变量

int  add()
{
	cout << f << endl; //全局变量f；
	int d = 5;
	return 4 * d;

	//同样的，main中定义的变量在其它函数中也不能使用；
	//cout << a << endl;
}


int main() 
{
	//输入两个数并计算积：
	cout << "计算两数的积\n请输入两个数" << endl;
	int a = 0, b = 0; //若干个同类型的变量这样定义也可以；
	cin >> a ;
	cin >> b;
	cout << a << "x" << b << "=" << a * b << endl;

	//在前面定义的add函数这里调用；
	cout<<add()<<endl;

	//add里面定义的局部变量d这里不能使用；
	//局部变量只能在对应大大括号内使用；全局变量可以在整个项目中使用；
	cout << f << endl; //全局变量f；
	//cout<<d<<endl;
	system("pause");
	return 0;
}