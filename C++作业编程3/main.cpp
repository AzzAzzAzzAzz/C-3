#include<iostream>
using namespace std;

class timedate
{
	int year, month, day, hh, mm, ss;
	string trsmonth;
public:
	void input()
	{
		cout << "�������ꡢ�¡��ա�ʱ���֡��룺" << endl;
		cin >> year;
		cin >> month;
		cin >> day;
		cin >> hh;
		cin >> mm;
		cin >> ss;
	}
	string transalte()
	{
		if (month == 1)
		{
			trsmonth = "January";
		}
		else if (month == 2)
		{
			trsmonth = "February";
		}
		else if (month == 3)
		{
			trsmonth = "Marcy";
		}
		else if (month == 4)
		{
			trsmonth = "April";
		}
		else if (month == 5)
		{
			trsmonth = "May";
		}
		else if (month == 6)
		{
			trsmonth = "June";
		}
		else if (month == 7)
		{
			trsmonth = "July";
		}
		else if (month == 8)
		{
			trsmonth = "August";
		}
		else if (month == 9)
		{
			trsmonth = "September";
		}
		else if (month == 10)
		{
			trsmonth = "October";
		}
		else if (month == 11)
		{
			trsmonth = "November";
		}
		else if (month == 12)
		{
			trsmonth = "December";
		}
		return trsmonth;
	}
	void display()
	{
		cout << "�������ʱ��Ϊ��" << trsmonth << " " << day << " " << year << endl;
		cout << hh << "ʱ" << mm << "��" << ss <<"��" << endl;
	}
};

int main()
{
	timedate t;
	t.input();
	t.transalte();
	t.display();
	return 0;
}

