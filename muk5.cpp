#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name ;
	int Salary ;
	int Sale ;
	float Commission ;
	cout <<" Enter name:";
	cin  >>Name;
	cout <<" Enter Salary:";
	cin  >> Salary;
	cout <<" Enter Sale:";
	cin  >> Sale;
	cout <<"Enter Commission Percent:";
	cin  >> Commission;
	cout << "Your Name" << Name <<endl;
	cout << "Total Revenue" << Salary+(Sale*(Commission/100))<<endl;
	system("pause");
	return 0;
}