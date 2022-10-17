#include<iostream>
using namespace std;
#include<string>
//指针的学习和使用
int main()
{
	int a=10;
	int b=20;
	cout<<&a<<endl; //获取变量存放的地址；

	int* p = &a; //用指针指向a，p是指针变量，用来存放a的地址；
	cout<<p<<endl;
	p = &b;   //换人了，指向另外一个变量；
	cout<<p<<endl;  //则输出另外变量的地址；
	cout<<*p<<endl;   //解引用，获取值操作；

	int c = 0;
	int* q = &c;
	cout<<"输入c的新值" << endl;
	cin >> *q;     //q是址，*q是值，赋值；
	cout <<c<<endl;
	cout<<sizeof(p)<<";" << sizeof(q) << endl;
	return 0;
}