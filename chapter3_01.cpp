#include<iostream>   
using namespace std; 
#include<string>

int main() 
{
	//��������1��bool
	bool isTrue = true;
	cout << isTrue;
	//��������1��int
	//һ���ֽ�Ϊ8λ��ÿһλ����ȡ1/0�� ����8λϵͳ��˵���ڴ浥Ԫ������2^8=256����ͬȡֵ
	// 16λϵͳ��65536���������޷��ŵģ��з��ŵĵ�һλ�����λ����ʾ���ţ�8λ+-127��16λ+-32768
	//��������1��char
	char a = 'b';
	cout<<a<<endl;
	//��������1��float
	//С��

	//�������͵ĳ���
	cout<<"bool"<<sizeof(bool)<<"char"<< sizeof(char) <<"int"<< sizeof(int) <<"short int"<< sizeof(short) <<"long"<< sizeof(long) <<"float"<< sizeof(float) <<"double" << sizeof(double) << endl;
system("pause");
return 0;
}