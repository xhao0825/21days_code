#include<iostream>   
using namespace std;
#include<string>

int main()
{
	int arr[5] = { 1,2,3 };
	int arr2[] = { 4,5,6 ,7,8};
	cout << arr[0] <<endl<< arr2[2] << endl;
	//for循环遍历数组：
	int i = 0,j=0;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << "第" << i + 1 << "个元素的值为：" << arr[i] << endl;

	//用数组指向指针来访问：
	int* p = arr2;
	cout<<p<<endl<<*p<<endl;
	//指针指向数组遍历：
	cout << "指针遍历：" << endl;
	for (j = 0; j < 5; j++, p++)
		cout<<*p<<endl;

	//修改某个值：
	int modify = 0;
	cout<<"请输入要改的值的下标" << endl;
	cin >> modify;
	cout << "请输入要改为的值" << endl;
	cin >> arr2[modify];
	cout << "after modify" << endl;
	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
		cout << "第" << i + 1 << "个元素的值为：" << arr2[i] << endl;

	return 0;
}