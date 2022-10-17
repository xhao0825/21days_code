#include<iostream>
using namespace std;
#include<string>
//contuniue 与 break 的使用
int feibo();
int main()
{
	while (true)
	{
		int a, b = 0;
		char c ,d= '\0';
		cout << "输入两个数：" << endl;
		cin >> a;
		cin >> b;
		cout << "要改数字吗？" << endl;
		cin >> c;
		if (c == 'y')
			continue;
		cout<<"计算的和为" << a + b << endl;
		cout <<"你要退出吗?" << endl;
		cin >> d;
		if (d == 'y')
			break;
	}

	feibo(); //调用斐波那契数列;
	return 0;
}

int feibo()  //斐波那契数列的计算；
{
	int a = 0, b = 1,temp = 0;
	int f1, f2 ,i= 0;
	f1 = a;
	f2 = b;
	for  (i=0;i<10;i++)
	{ 
		temp = f2;
		f2 = f1 + temp;
		f1 = temp;
		cout<<"第"<<i+1<<"次,和为" <<f2<< endl;
	}
	return 0;
}