#include<iostream>   
using namespace std;
#include<string>

int main()
{
	int arr[5] = { 1,2,3 };
	int arr2[] = { 4,5,6 ,7,8};
	cout << arr[0] <<endl<< arr2[2] << endl;
	//forѭ���������飺
	int i = 0,j=0;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << "��" << i + 1 << "��Ԫ�ص�ֵΪ��" << arr[i] << endl;

	//������ָ��ָ�������ʣ�
	int* p = arr2;
	cout<<p<<endl<<*p<<endl;
	//ָ��ָ�����������
	cout << "ָ�������" << endl;
	for (j = 0; j < 5; j++, p++)
		cout<<*p<<endl;

	//�޸�ĳ��ֵ��
	int modify = 0;
	cout<<"������Ҫ�ĵ�ֵ���±�" << endl;
	cin >> modify;
	cout << "������Ҫ��Ϊ��ֵ" << endl;
	cin >> arr2[modify];
	cout << "after modify" << endl;
	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
		cout << "��" << i + 1 << "��Ԫ�ص�ֵΪ��" << arr2[i] << endl;

	return 0;
}