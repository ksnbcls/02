#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float a, b = 1.00;
	cout << "�����뻪���¶ȣ�";
	cin >> b ;
	a = (b - 32)* 5 / 9  ;
	cout <<fixed<<setprecision(2)<< "�����¶�Ϊ��" << a;
	return 0;
}