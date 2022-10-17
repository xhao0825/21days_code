#include<iostream>
using namespace std;
#include<string>
//逻辑运算+选择语句；
int main()
{
	int a, b ,result= 0;

	char c = '\0';
	cout << "请输入两个数字：" << endl;
	cin >> a;
	cin >> b;
	cout << "请选择计算方法：" << endl;
	cin >> c;
	if (c == 'm')

	{
		cout << "选择了乘法" << endl;
		if (a == 0 || b == 0)
			cout << "0和任何数相乘都得0" << endl;
		else
			result = a * b;
	}

	else if (c == 'x')
		cout << "退出" << endl;
	else
	{
		cout << "选择了加法" << endl;
		result = a + b;
	}
	cout<<"结果是：" <<result<< endl;

	return 0;
}