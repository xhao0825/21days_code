#include<iostream>
using namespace std;
#include<string>
//�߼����㣻
int main()
{
	//��ȥ��
	bool i, j = true;
	char a, b = '\0';
	cout << "do you want to go ?" << endl;
	cin >> a;
	if (a == 'y')
		i = true;
	else
		i = false;

	//��ȥ��
	cout << "can you go ?" << endl;
	cin >> b;
	if (b == 'y')
		j = true;
	else
		j = false;
	//�жϣ�
	if (i && j)
		cout << "go" << endl;
	else
		cout<<"wait" << endl;

	return 0;
}