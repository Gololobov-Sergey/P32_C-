#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	///// 26.04.2024 //////


	// Дано трехзначное число.Проверить истинность высказывания :
	// «Цифры данного числа образуют возрастающую последовательность».

	//258

	/*int n, a, b, c;
	cin >> n;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	bool res = a < b && b < c;
	cout << res << endl;*/


	// Даны три целых числа : A, B, C.Проверить истинность высказыва -
	// ния : «Ровно одно из чисел A, B, C положительное».
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res = (a > 0) + (b > 0) + (c > 0) == 1;
	cout << res << endl;*/

	/*int a, b;
	cin >> a;
	if (a == 5)
	{
		b = 10;
	}
	else
	{
		b = 15;
	}
	cout << b << endl;*/


	/*int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && a > c)	
	{ 
		cout << a << endl; 
	}
	else if (b > c)
	{
		cout << b << endl;
	}
	else
	{
		cout << c << endl;
	}
	}*/


	// Дано целое число, лежащее в диапазоне 1–999.Вывести его строку -
	// описание вида «четное двузначное число», «нечетное трехзначное число»



	/*int a, b, c, max;
	cin >> a >> b >> c;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}*/

	// (condition) ? oper1 : oper2;

	/*(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;

	max = (a > b && a > c) ? a : (b > c) ? b : c;*/



	// Определить, останется ли в клеёнке более N дырок если во время
	// обеда K раз проткнуть её вилкой с M отломанными зубчиками и 
	// L раз – целой вилкой, у которой S зубчиков.

	//d = k*(s-m) + l*s

	/*int a, b, c;
	float p, s;

	cout << " a: ";
	cin >> a;
	cout << " b: ";
	cin >> b;
	cout << " c: ";
	cin >> c;

	p = (a + b + c) / 2.;
	s = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << ": ";
	cout << p << endl;
	cout << s;
	cout << " ^2";*/




	///// 22.04.2024 //////

	// type name;

	// bool - 1b

	// char  - 1b


	// byte - 1b
	// short  - 2b
	// int - 4b
	// long - 4b
	// long long - 8b

	// float - 4b (7)
	// double - 8b (15)
	// long double - 10b

	/*short year = 2024;
	cout << &year << endl;

	int t = 'a';
	char t1 = 98;
	cout << t << endl;
	cout << t1 << endl;

	float f = 6.9999;
	cout << f << endl;

	float x = -1.5;*/

	//unsigned int c = 3000000000;
	//cout << c << endl;

	//const int a = 5;
	////a = 9;

	//bool b = true;
	//cout << b << endl;

	// -, +, ++, --
	// =, +, -, *, /, %, +=, -=, *=, /=, %=

	// !
	// <, >, <=, >=, ==, !=, &&, ||, ^(xor)

	// >>, <<, ~, &, |, ::, ?:, [], {} , (), , . ->,  \  

	//int a = 5, b = 4, c;

	//a = a + b;
	//a += b;
	//a = a + 1;
	//a += 1;
	//a++;
	//++a;
	//cout << a << endl;  //5
	//cout << a++ << endl; //6
	//cout << ++a << endl; // 7
	//cout << a << endl; // 7

	/*c = ++a * (--a - --b/a++);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << 5 / 3.f << endl;
	cout << pow(5, 3) << endl;*/



	//c = a * b;
	//cout << c << endl;
	//cin >> a;




	/*cout << "Hello C++" << endl;
	cout << "Мене звати Сергій" << endl;*/

	system("pause");
}