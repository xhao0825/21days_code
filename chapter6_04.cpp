#include<iostream>
using namespace std;
#include<string>
//contuniue �� break ��ʹ��
int feibo();
int main()
{
	while (true)
	{
		int a, b = 0;
		char c ,d= '\0';
		cout << "������������" << endl;
		cin >> a;
		cin >> b;
		cout << "Ҫ��������" << endl;
		cin >> c;
		if (c == 'y')
			continue;
		cout<<"����ĺ�Ϊ" << a + b << endl;
		cout <<"��Ҫ�˳���?" << endl;
		cin >> d;
		if (d == 'y')
			break;
	}

	feibo(); //����쳲���������;
	return 0;
}

int feibo()  //쳲��������еļ��㣻
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
		cout<<"��"<<i+1<<"��,��Ϊ" <<f2<< endl;
	}
	return 0;
}