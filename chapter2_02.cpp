#include<iostream>   
using namespace std;  
#include<string>
int f = 10;//����һ��ȫ�ֱ���

int  add()
{
	cout << f << endl; //ȫ�ֱ���f��
	int d = 5;
	return 4 * d;

	//ͬ���ģ�main�ж���ı���������������Ҳ����ʹ�ã�
	//cout << a << endl;
}


int main() 
{
	//�������������������
	cout << "���������Ļ�\n������������" << endl;
	int a = 0, b = 0; //���ɸ�ͬ���͵ı�����������Ҳ���ԣ�
	cin >> a ;
	cin >> b;
	cout << a << "x" << b << "=" << a * b << endl;

	//��ǰ�涨���add����������ã�
	cout<<add()<<endl;

	//add���涨��ľֲ�����d���ﲻ��ʹ�ã�
	//�ֲ�����ֻ���ڶ�Ӧ���������ʹ�ã�ȫ�ֱ���������������Ŀ��ʹ�ã�
	cout << f << endl; //ȫ�ֱ���f��
	//cout<<d<<endl;
	system("pause");
	return 0;
}