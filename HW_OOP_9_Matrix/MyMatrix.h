#pragma once
class MyMatrix
{
	int** ptr;
	int rows;
	int cols;
public:
	// конструктор копирования
	// установка и получение произвольного элемента матрицы(доступ через индексы).

	MyMatrix();
	MyMatrix(int _str, int _st);
	MyMatrix(const MyMatrix& m1);

	void SetEl(int r, int c, int newEl)const;
	int GetEl(int r, int c);

	MyMatrix Sum(const MyMatrix& m1);
	MyMatrix Mul(const MyMatrix& m1);
	MyMatrix Transpose();

	void Input();
	void Print()const;
	~MyMatrix();
};
