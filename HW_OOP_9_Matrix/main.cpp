#include<iostream>
#include "MyMatrix.h"
using namespace std;

// Создать класс для работы с матрицами.
// Предусмотреть, как минимум, 
// функции для сложения матриц, 
// умножения матриц, 
// транспонирования матриц, 
// 
// присваивания матриц друг другу(конструктор копирования), 
// установка и получение произвольного элемента матрицы(доступ через индексы).

// конструктор копирования
// установка и получение произвольного элемента матрицы(доступ через индексы).


int main()
{
	// транспонирование
	MyMatrix obj1(5, 2);
	obj1.Input();
	obj1.Print();
	cout << endl;
	MyMatrix obj2 = obj1.Transpose();
	obj2.Print();

	// умн
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

	// сумма
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