#include<iostream>
using namespace std;
#include<string>
//�߼�����+ѡ����䣻
int main()
{
	int a, b ,result= 0;

	char c = '\0';
	cout << "�������������֣�" << endl;
	cin >> a;
	cin >> b;
	cout << "��ѡ����㷽����" << endl;
	cin >> c;
	if (c == 'm')

	{
		cout << "ѡ���˳˷�" << endl;
		if (a == 0 || b == 0)
			cout << "0���κ�����˶���0" << endl;
		else
			result = a * b;
	}

	else if (c == 'x')
		cout << "�˳�" << endl;
	else
	{
		cout << "ѡ���˼ӷ�" << endl;
		result = a + b;
	}
	cout<<"����ǣ�" <<result<< endl;

	return 0;
}