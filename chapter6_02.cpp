#include<iostream>
using namespace std;
#include<string>
//switch语句
//switch后面只能跟整数；当匹配到对应的常量时，执行相应语句；
//若不加break，后面也会执行，break不是非加不可，有些多个常量执行同个操作；
//即从对应的常量进入，从break退出
//当一个都对应不上时，defalt退出；
//之前我会把defalt当做最后一个case用，不好，case只包含一个；而defalt包含所有不符合条件的；

int main()
{
	int score,s = 0;
	cout << "请输入成绩：" << endl;
	cin >> score;
	s = score / 10;
	switch (s)
	{
	case 10:
		cout << "满分" << endl;
		break;
	case 9:
		cout<<"优" << endl;
		break;
	case 8:
		cout << "良" << endl;
		break;
	case 7:
		cout << "中" << endl;
		break;
	case 6:
		cout << "差" << endl;
		break;
	default:
		cout<<"不及格" << endl;
		break;
	}
	return 0;

}
