#include<iostream>
using namespace std;
#include<string>

int for_loop()   //for循环的函数
{
	int k,z = 0;
	int arr[5] = {0};
	for (k = 0; k < sizeof(arr) / sizeof(int); k++)
	{
		cout << "给数组的第" << k + 1 << "个值赋值为：" << endl;
		cin >> arr[k];
	}
	cout<<"赋值完成" << endl;
	for (z = 0; z < sizeof(arr) / sizeof(int); z++)
	{
		cout << arr[z]<<endl;
	}
	return 0;
}

int main()
{  //while 循环；
	int j = 10;
	char f = '\0';
		while (f != 'x')  //设置一个特定键作为停止条件；
		{
			cout << j << endl;
			cout<<"请输入任意键继续，x停止，" << endl;
			cin >> f;
			j -= 1;
	}
		cout<<"您按x退出了" << endl;

	int i = 1;
	while (i)    //i为非0时继续，为0时退出；
	{
		cout<<"keep" << endl;
		cout<<"go on？(any button continue expect 0)" << endl;
		cin >> i;
	}

	for_loop();  //调用for循环函数；

	return 0;
}