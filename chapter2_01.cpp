#include<iostream>    //预处理器编译指令，包含标准头文件；在编译前先把包含的文件读入；
using namespace std;  //命名空间
#include<string>

int main()   //执行程序时从mian函数开始，
{
	cout << "Hello world \n"; //输出

	//输入后输出：
	cout<<"请输入一个名字：" << endl;
	string name = "/0";
	cin >> name;
	cout<<"您输入的名字是"<<name<<endl;

	system("pause");
	return 0;
}