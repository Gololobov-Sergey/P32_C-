#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;


struct Point
{
	char name;
	int x;
	int y;

	void print()
	{
		cout << name << "(" << x << ", " << y << ")" << endl;
	}
};





float length(Point p1, Point p2 = { ' ', 0, 0 })
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

Point maxLength(Point* p, int size)
{
	float lenMax = 0;
	int pos = 0;
	for (size_t i = 0; i < size; i++)
	{
		float len = length(p[i]);
		if (len > lenMax)
		{
			lenMax = len;
			pos = i;
		}
	}
	return p[pos];
}


struct Date
{
	int day;
	int month;
	int year;

	void set()
	{
		cout << "Enter date: DD MM YYYY - ";
		cin >> day >> month >> year;
	}

	void print()
	{
		if (day < 10)
			cout << 0;
		cout << day << ".";
		if (month < 10)
			cout << 0;
		cout << month << "." << year << endl;
	}

};






struct Human
{
	char* name;
	Date birthDay;
};



struct Engine
{
	int cilindr = 4;

	void start()
	{
		cout << "Engine start" << endl;
	}

	void stop()
	{
		cout << "Engine stop" << endl;
	}
};


struct Car
{
	Engine engine;

	void Move()
	{
		engine.start();
		Beep();
		cout << "Car move...." << endl;
		engine.stop();
	}

	void Beep()
	{
		cout << "Beep Beep" << endl;
	}
};



struct Student
{
	char* name;
	int* marks = nullptr;
	int size_mark = 0;

	void addMark(int mark)
	{

	}

	void setName(char* n)
	{

	}

	float avgMarks()
	{

	}

	void info()
	{

	}
};

struct Group
{
	Student* students = nullptr;
	int size = 0;

	void addStudent() // void addStudent(Student s)
	{

	}

	void list5()
	{

	}


	void list2()
	{

	}
};