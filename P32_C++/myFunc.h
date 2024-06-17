#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//виводить лінію із зірочок
void starLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}


//int Sum(int a, int b, int c = 0, int d = 0)
//{
//	return a + b + c + d;
//}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype (a + b)
{
	return a + b + c;
}

float avg3(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}


int Inc(int a)
{
	a++;
	return a;
}


bool isEven(int n)
{
	return n % 2 == 0;
}

bool big10(int a)
{
	return a > 10;
}

template<class T>
void printArray(T arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T arr[], int size, int minValue, int maxValue)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
int findElemArray(T arr[], int size, int key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

template<class T>
void reverseArray(T arr[], int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}

template<class T>
T maxArray(T arr[], int size)
{
	T max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void initField(char field[][3], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			field[i][j] = ' ';
		}
	}
}

void printField(char field[][3], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << setw(2) << field[i][j];
			if (j < size - 1)
			{
				cout << " |";
			}
		}
		cout << endl;
		if (i < size - 1)
		{
			for (size_t k = 0; k < size * 3 + size - 1; k++)
			{
				cout << "-";
			}
			cout << endl;

		}
	}
}

void moveUser(char field[][3], int size)
{
	cout << endl;
	do
	{
		cout << "Ваш вибір (1-" << size*size << ") : ";
		int choice;
		cin >> choice;
		choice--;
		if (field[choice / size][choice % size] == ' ')
		{
			field[choice / size][choice % size] = 'X';
			return;
		}
	} while (true);
}

void moveComp(char field[][3], int size)
{
	cout << endl;
	do
	{
		int choice = rand() % (size*size);
		if (field[choice / size][choice % size] == ' ')
		{
			field[choice / size][choice % size] = '0';
			return;
		}
	} while (true);
}

char isWinner(char field[][3], int size) // X - User, 0 - Comp, " " - Continue
{
	for (size_t i = 0; i < size; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < size-1; j++)
		{
			if (field[i][j] != field[i][j+1] || field[i][j] == ' ')
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return field[i][0];
		}
	}

	for (size_t j = 0; j < size; j++)
	{
		bool flag = true;
		for (size_t i = 0; i < size-1; i++)
		{
			if (field[i][j] != field[i+1][j] || field[i][j] == ' ')
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return field[0][j];
		}
	}

	bool flag = true;
	for (size_t i = 0; i < size-1; i++)
	{
		if (field[i][i] != field[i+1][i+1] || field[i][i] == ' ')
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		return field[0][0];
	}

	flag = true;
	for (size_t i = 0; i < size-1; i++)
	{
		if (field[i][size-1-i] != field[i+1][size-1-i+1] || field[i][size-1-i] == ' ')
		{
			flag = false;
			break;
		}
		
	}
	if (flag)
	{
		return field[0][size - 1];
	}


	return ' ';
}