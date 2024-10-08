﻿#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>

#include"Menu.h"

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

	void addMark()
	{
		int m;
		cin >> m;
		cin.ignore();
		addMark(m);

	}

	void addMark(int m)
	{
		addValueArray(marks, size_mark, m);
	}

	void setName(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}

	float avgMarks()
	{

	}

	void info()
	{
		cout << name << " , mark: ";
		for (size_t i = 0; i < size_mark; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
	}

	void save(ofstream& out)
	{
		out << name << endl;
		out << size_mark << endl;
		for (size_t i = 0; i < size_mark; i++)
		{
			out << marks[i] << " ";
		}
		out << endl;
	}

	void load(ifstream& in)
	{
		char buff[80];
		in.getline(buff, 80);
		setName(buff);
		in >> size_mark;
		marks = new int[size_mark];
		for (size_t i = 0; i < size_mark; i++)
		{
			in >> marks[i];
		}

		in.getline(buff, 80);

		//in.get();
		//in.get();
	}

	void menu()
	{
		while (true)
		{
			system("cls");
			int c = Menu::select_vertical({ "Add mark", "Return" }, HorizontalAlignment::Center);
			switch (c)
			{
			case 0:
				addMark();
				break;
			case 1:
				return;
			default:
				break;
			}
		}
	}
};

struct Group
{
	Student* students = nullptr;
	int size = 0;

	void addStudent() // void addStudent(Student s)
	{
		Student st;
		char n[80];
		cin.getline(n, 80);
		st.setName(n);
		addValueArray(students, size, st);
	}

	void list5()
	{

	}


	void list2()
	{

	}

	void info()
	{
		for (size_t i = 0; i < size; i++)
		{
			students[i].info();
		}
		system("pause");
	}

	void work()
	{
		system("cls");
		for (size_t i = 0; i < size; i++)
		{
			cout << i+1 << ". " << students[i].name << endl;
		}
		cout << "Enter number students: ";
		int c;
		cin >> c;
		cin.ignore();
		students[c - 1].menu();
	}

	void save()
	{
		ofstream out("students.txt");
		out << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			students[i].save(out);
		}
		out.close();
	}

	void load()
	{
		ifstream in("students.txt");
		if (in.is_open())
		{
			in >> size;
			in.get();
			students = new Student[size];
			for (size_t i = 0; i < size; i++)
			{
				students[i].load(in);
			}
		}
		else
		{
			cout << "File not found!" << endl;
			system("pause");
		}
		in.close();
	}


	void menu()
	{
		load();
		while (true)
		{
			system("cls");
			int c = Menu::select_vertical({ "Add Student", "List 5", "Info", "Work with students", "Save", "Exit" }, HorizontalAlignment::Center);
			switch (c)
			{
			case 0:
				addStudent();
				break;
			case 1:
				list5();
				break;
			case 2:
				info();
				break;
			case 3:
				work();
				break;
			case 4:
				save();
				break;
			case 5:
				exit(0);
			default:
				break;
			}
		}
	}
};