#include<iostream>
using namespace std;
#include<string>
//��ά���飻
int main()
{
	int arr[][3] = { 1,2,3,4,5,6 }; //�����ʱ����Բ�д�У�һ��Ҫд�У����Զ����䣻
	int arr2[2][3] = { {1,2,3}, {4,5,6} };

	cout<<arr[0][0]<<endl<<arr2[1][1]<<endl;
	//������ά������ҪǶ�ױ�����
	int i, j = 0;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			cout<<arr[i][j]<<endl;

	string a = "hello";
	cout<<strlen("hello") << endl;
	return 0;
}