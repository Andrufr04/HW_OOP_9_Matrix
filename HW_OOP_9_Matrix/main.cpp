#include<iostream>
#include "MyMatrix.h"
using namespace std;

// ������� ����� ��� ������ � ���������.
// �������������, ��� �������, 
// ������� ��� �������� ������, 
// ��������� ������, 
// ���������������� ������, 
// 
// ������������ ������ ���� �����(����������� �����������), 
// ��������� � ��������� ������������� �������� �������(������ ����� �������).

// ����������� �����������
// ��������� � ��������� ������������� �������� �������(������ ����� �������).


int main()
{
	// ����������������
	MyMatrix obj1(5, 2);
	obj1.Input();
	obj1.Print();
	cout << endl;
	MyMatrix obj2 = obj1.Transpose();
	obj2.Print();

	// ���
	/*MyMatrix obj1(2, 2);
	obj1.Input();
	obj1.Print();
	cout << endl;

	MyMatrix obj2(2, 2);
	obj2.Input();
	obj2.Print();
	cout << endl;

	MyMatrix obj3 = obj1.Mul(obj2);
	obj3.Print();*/

	// �����
	/*MyMatrix obj1(3, 2);
	obj1.Input();
	obj1.Print();
	cout << endl;

	MyMatrix obj2(3, 2);
	obj2.Input();
	obj2.Print();
	cout << endl;

	MyMatrix obj3 = obj1.Sum(obj2);
	obj3.Print();*/

}