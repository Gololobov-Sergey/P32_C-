#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	///// 06.05.2024 //////


	//  Даны два целых числа : D(день) и M(месяц), определяющие правиль -
	//	ную дату невисокосного года.Вывести значения D и M для даты, наступна
	//	для указанной.

	/*int d, m, y, dmax;
	cin >> d >> m >> y;
	d++;

	switch (m)
	{
	case 4: case 6: case 9: case 11: dmax = 30; break;
	case 2:                          dmax = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 29 : 28; break;
	default:                         dmax = 31;	break;
	}

	if (d > dmax)
	{
		d = 1;
		m++;
	}
	m = (m == 13) ? 1 : m;

	cout << d << "." << m << "." << y << endl;*/



	//  Даны два целых числа : D(день) и M(месяц), определяющие правиль -
	//	ную дату невисокосного года.Вывести значения D и M для даты, предше -
	//	ствующей указанной.

	/*int d, m, dmax;
	cin >> d >> m;
	switch (m-1)
	{
	case 4: case 6: case 9: case 11: dmax = 30; break;
	case 2:                          dmax = 28; break;
	default:                         dmax = 31;	break;
	}

	d--;
	
	if (d == 0)
	{
		m--;
		d = dmax;
	}

	if (m == 0)
		m = 12;

	cout << d << "." << m << endl;*/



	//  Дано целое число в диапазоне 20–69, определяющее возраст(в годах).
	//	Вывести строку - описание указанного возраста, обеспечив правильное со -
	//	гласование числа со словом «год», например: 20 — «двадцать лет», 32 —
	//	«тридцать два года», 41 — «сорок один год».


	int n, n1, n2;
	cin >> n;
	n1 = n / 10;
	n2 = n % 10;
	switch (n1)
	{
	case 2: cout << "Двадцять "; break;
	case 3: cout << "Тридцять "; break;
	case 4: cout << "Сорок "; break;
	case 5: cout << "П'тдесят "; break;
	case 6: cout << "Шісьдесят "; break;
	}

	switch (n2)
	{
	case 0: cout << "років" << endl; break;
	case 1: cout << "один рік" << endl; break;
	case 2: cout << "два роки" << endl; break;
	case 3: cout << "три роки" << endl; break;
	case 4: cout << "чотри роки" << endl; break;
	case 5: cout << "п'ть років" << endl; break;
	case 6: cout << "шість років" << endl; break;
	case 7: cout << "сім років" << endl; break;
	case 8: cout << "вісім років" << endl; break;
	case 9: cout << "дев'ть років" << endl; break;
	}


	/*
	    В восточном календаре принят 60 - летний цикл, состоящий из 12 - лет -
		них подциклов, обозначаемых названиями цвета : зеленый, красный, жел -
		тый, белый и черный.В каждом подцикле годы носят названия животных :
	    крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, ку -
		рицы, собаки и свиньи.По номеру года определить его название, если 1984
		год — начало цикла : «год зеленой крысы».*/



	/*
	I = 1
	V = 5
	X = 10
	L = 50
	C = 100
	D = 500
	M = 1000

	2024
	MMXXIV

	*/



	/*int d;
	cin >> d;
	switch (d)
	{
	case 1:
		cout << "Mo" << endl;
		break;
	case 2:
		cout << "Tu" << endl;
		break;
	default:
		cout << "Not day" << endl;
		break;
	}*/

	/*double f = 6.53;
	cout << f << endl;

	int m;
	cin >> m;
	switch (m)
	{
	case 1: case 2:  case 12: cout << "Зима" << endl; break;
	case 3: case 4:  case 5:  cout << "Весна" << endl; break;
	case 6: case 7:  case 8:  cout << "Літо" << endl; break;
	case 9: case 10: case 11: cout << "Осінь" << endl; break;
	default:                  cout << "Not month" << endl; break;
	}*/

	//float f;
	/*cin >> f;
	switch (f)
	{
	default:
		break;
	}*/

	// 2+4
	// 6

	/*int a, b, res = 0;
	char op;
	cin >> a >> op >> b;*/
	/*if (op == '+')
	{
		res = a + b;
	}
	else if (op == '-')
	{
		res = a - b;
	}
	else if (op == '*')
	{
		res = a * b;
	}
	else if (op == '/')
	{
		res = a / b;
	}*/

	/*bool f = true;
	switch (op)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default:
		f = false;
		cout << "Not operation" << endl;
	}
	if (f)
	{
		cout << res << endl;
	}*/

	/*float m = 3.25;
	m++;
	cout << m << endl;*/

	/*int a, b, c, d, e, f, g, max;
	cin >> a >> b >> c >> d >> e >> f >> g;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;
	if (f > max)
		max = f;
	if (g > max)
		max = g;
	cout << max << endl;*/



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
	else
	{
		if (b > c)
		{
			cout << b << endl;
		}
		else
		{
			cout << c << endl;
		}
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