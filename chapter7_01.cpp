#include<iostream>
using namespace std;
#include<string>

int area(int a) //�����������붨�壻
{
	return a * a;
}

int area(int a, int b)  //����
{
	return a + b;
}

int main()
{
	int b = 0;
	cout << "����һ�������εı߳���" << endl;
	cin >> b;
	cout<<"�����ε�����ǣ�" << area(b) << endl;
	return 0;
}