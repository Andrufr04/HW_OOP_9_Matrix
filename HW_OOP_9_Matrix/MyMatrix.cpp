#include "MyMatrix.h"
//#include <stdlib.h>
#include <iostream>
using namespace std;

MyMatrix::MyMatrix()
{
	ptr = nullptr;
	rows = cols = 0;
}
MyMatrix::MyMatrix(int _str, int _st)
{
	rows = _str;
	cols = _st;
	ptr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		ptr[i] = new int[cols] {0};
	}

}
MyMatrix::MyMatrix(const MyMatrix& m1)
{
	rows = m1.rows;
	cols = m1.cols;

	ptr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		ptr[i] = new int[cols];
		for (int j = 0; j < cols; j++)
		{
			ptr[i][j] = m1.ptr[i][j];
		}
	}
}

void MyMatrix::SetEl(int r, int c, int newEl) const
{
	if (r < 0 || r >= rows || c < 0 || c >= cols)
	{
		cout << "ERROR" << endl;
	}
	else
	{
		ptr[r][c] = newEl;
	}
}
int MyMatrix::GetEl(int r, int c)
{
	if (r < 0 || r >= rows || c < 0 || c >= cols)
	{
		cout << "ERROR" << endl;
	}
	else
	{
		return ptr[r][c];
	}
}

MyMatrix MyMatrix::Sum(const MyMatrix& m1)
{
	if (rows == m1.rows && cols == m1.cols)
	{
		MyMatrix sum(rows, cols);

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				sum.ptr[i][j] = this->ptr[i][j] + m1.ptr[i][j];
			}
		}
		return sum;
	}
	else
	{
		cout << "ERROR" << endl;
		return MyMatrix(0, 0);
	}
}
MyMatrix MyMatrix::Mul(const MyMatrix& m1)
{
	if (cols == m1.rows)
	{
		MyMatrix mul(rows, m1.cols);

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < m1.cols; j++)
			{
				mul.ptr[i][j] = 0;

				for (int k = 0; k < cols; k++)
				{
					mul.ptr[i][j] += this->ptr[i][k] * m1.ptr[k][j];
				}
			}
		}
		return mul;
	}
	else
	{
		cout << "ERROR" << endl;
		return MyMatrix(0, 0);
	}
}
MyMatrix MyMatrix::Transpose()
{
	MyMatrix transposed(cols, rows);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			transposed.ptr[j][i] = this->ptr[i][j];
		}
	}
	return transposed;
}

void MyMatrix::Input()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			ptr[i][j] = rand()% 10;
		}
	}
}
void MyMatrix::Print() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << ptr[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

MyMatrix::~MyMatrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[]ptr[i];
	}
	delete[] ptr;
	//cout << "Destructor\n";
}