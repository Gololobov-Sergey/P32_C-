#pragma once
#include<iostream>
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


enum Direction
{
	UP, DOUN = 10, LEFT, RIGHT
};

//виводить лінію із зірочок
void starLine()
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "*";
	}
	cout << endl;
}


int Sum(int a, int b)
{
	return a + b;
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


void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void setArray(int arr[], int size, int minValue, int maxValue)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

int findElemArray(int arr[], int size, int key)
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

void reverseArray(int arr[], int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}