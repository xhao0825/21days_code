#include<iostream>
using namespace std;
#include<string>
//ָ���ѧϰ��ʹ��
int main()
{
	int a=10;
	int b=20;
	cout<<&a<<endl; //��ȡ������ŵĵ�ַ��

	int* p = &a; //��ָ��ָ��a��p��ָ��������������a�ĵ�ַ��
	cout<<p<<endl;
	p = &b;   //�����ˣ�ָ������һ��������
	cout<<p<<endl;  //�������������ĵ�ַ��
	cout<<*p<<endl;   //�����ã���ȡֵ������

	int c = 0;
	int* q = &c;
	cout<<"����c����ֵ" << endl;
	cin >> *q;     //q��ַ��*q��ֵ����ֵ��
	cout <<c<<endl;
	cout<<sizeof(p)<<";" << sizeof(q) << endl;
	return 0;
}