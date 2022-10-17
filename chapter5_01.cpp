#include<iostream>
using namespace std;
#include<string>
//逻辑运算；
int main()
{
	//想去吗？
	bool i, j = true;
	char a, b = '\0';
	cout << "do you want to go ?" << endl;
	cin >> a;
	if (a == 'y')
		i = true;
	else
		i = false;

	//能去吗？
	cout << "can you go ?" << endl;
	cin >> b;
	if (b == 'y')
		j = true;
	else
		j = false;
	//判断：
	if (i && j)
		cout << "go" << endl;
	else
		cout<<"wait" << endl;

	return 0;
}