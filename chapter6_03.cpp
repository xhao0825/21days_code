#include<iostream>
using namespace std;
#include<string>

int for_loop()   //forѭ���ĺ���
{
	int k,z = 0;
	int arr[5] = {0};
	for (k = 0; k < sizeof(arr) / sizeof(int); k++)
	{
		cout << "������ĵ�" << k + 1 << "��ֵ��ֵΪ��" << endl;
		cin >> arr[k];
	}
	cout<<"��ֵ���" << endl;
	for (z = 0; z < sizeof(arr) / sizeof(int); z++)
	{
		cout << arr[z]<<endl;
	}
	return 0;
}

int main()
{  //while ѭ����
	int j = 10;
	char f = '\0';
		while (f != 'x')  //����һ���ض�����Ϊֹͣ������
		{
			cout << j << endl;
			cout<<"�����������������xֹͣ��" << endl;
			cin >> f;
			j -= 1;
	}
		cout<<"����x�˳���" << endl;

	int i = 1;
	while (i)    //iΪ��0ʱ������Ϊ0ʱ�˳���
	{
		cout<<"keep" << endl;
		cout<<"go on��(any button continue expect 0)" << endl;
		cin >> i;
	}

	for_loop();  //����forѭ��������

	return 0;
}