#include<iostream>
using namespace std;
#include<string>
//switch���
//switch����ֻ�ܸ���������ƥ�䵽��Ӧ�ĳ���ʱ��ִ����Ӧ��䣻
//������break������Ҳ��ִ�У�break���ǷǼӲ��ɣ���Щ�������ִ��ͬ��������
//���Ӷ�Ӧ�ĳ������룬��break�˳�
//��һ������Ӧ����ʱ��defalt�˳���
//֮ǰ�һ��defalt�������һ��case�ã����ã�caseֻ����һ������defalt�������в����������ģ�

int main()
{
	int score,s = 0;
	cout << "������ɼ���" << endl;
	cin >> score;
	s = score / 10;
	switch (s)
	{
	case 10:
		cout << "����" << endl;
		break;
	case 9:
		cout<<"��" << endl;
		break;
	case 8:
		cout << "��" << endl;
		break;
	case 7:
		cout << "��" << endl;
		break;
	case 6:
		cout << "��" << endl;
		break;
	default:
		cout<<"������" << endl;
		break;
	}
	return 0;

}
