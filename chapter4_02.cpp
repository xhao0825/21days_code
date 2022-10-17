#include<iostream>
using namespace std;
#include<string>
//二维数组；
int main()
{
	int arr[][3] = { 1,2,3,4,5,6 }; //定义的时候可以不写行，一定要写列，会自动分配；
	int arr2[2][3] = { {1,2,3}, {4,5,6} };

	cout<<arr[0][0]<<endl<<arr2[1][1]<<endl;
	//遍历二维数组需要嵌套遍历：
	int i, j = 0;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			cout<<arr[i][j]<<endl;

	string a = "hello";
	cout<<strlen("hello") << endl;
	return 0;
}