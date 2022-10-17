#include<iostream>   
using namespace std; 
#include<string>

int main() 
{
	//变量类型1：bool
	bool isTrue = true;
	cout << isTrue;
	//变量类型1：int
	//一个字节为8位，每一位可以取1/0； 对于8位系统来说，内存单元可以有2^8=256个不同取值
	// 16位系统有65536个；这是无符号的，有符号的第一位（最高位）表示符号；8位+-127；16位+-32768
	//变量类型1：char
	char a = 'b';
	cout<<a<<endl;
	//变量类型1：float
	//小数

	//各种类型的长度
	cout<<"bool"<<sizeof(bool)<<"char"<< sizeof(char) <<"int"<< sizeof(int) <<"short int"<< sizeof(short) <<"long"<< sizeof(long) <<"float"<< sizeof(float) <<"double" << sizeof(double) << endl;
system("pause");
return 0;
}