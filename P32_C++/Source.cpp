﻿#include<iostream>
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


enum Direction
{
	UP, DOUN = 10, LEFT, RIGHT
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	SetColor(White, Black);
	system("cls");


	///// 31.05.2024 //////

	//=============================================================================

	const int size = 10;
	int arrA[size];
	int arrB[size];
	int arrC[size * 2];
	srand(time(0));

	int minValue = 1, maxValue = 20;
	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % (maxValue - minValue + 1) + minValue;
		arrB[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	cout << "A = ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arrA[i] << " ";
	}
	cout << endl;


	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arrA[i], arrA[size - 1 - i]);
	}



	/*int count = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arrA[j] < arrA[j + 1]) 
			{
				swap(arrA[j], arrA[j + 1]);
				count++;
			}
		}
	}*/

	/*int t = arrA[0];
	arrA[0] = arrA[size - 1];
	arrA[size - 1] = t;*/

	cout << "A = ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arrA[i] << " ";
	}
	cout << endl;

	//cout << count << endl;



	/*cout << "B = ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arrB[i] << " ";
	}
	cout << endl;*/

	//int sizeC = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	bool flag = true;
	//	for (size_t j = 0; j < size; j++)
	//	{
	//		if (arrA[i] == arrB[j]) 
	//		{
	//			flag = false;
	//			break;
	//		}
	//	}
	//	if (flag)
	//	{
	//		bool flagC = true;
	//		for (size_t k = 0; k < sizeC; k++)
	//		{
	//			if (arrA[i] == arrC[k])
	//			{
	//				flagC = false;
	//				break;
	//			}
	//		}
	//		if (flagC)
	//		{
	//			arrC[sizeC++] = arrA[i];
	//		}
	//	}
	//}

	//for (size_t i = 0; i < size; i++)  // B
	//{
	//	bool flag = true;
	//	for (size_t j = 0; j < size; j++) // A
	//	{
	//		if (arrB[i] == arrA[j])
	//		{
	//			flag = false;
	//			break;
	//		}
	//	}
	//	if (flag)
	//	{
	//		bool flagC = true;
	//		for (size_t k = 0; k < sizeC; k++)
	//		{
	//			if (arrB[i] == arrC[k])
	//			{
	//				flagC = false;
	//				break;
	//			}
	//		}
	//		if (flagC)
	//		{
	//			arrC[sizeC++] = arrB[i];
	//		}
	//	}
	//}

	//cout << "C = ";
	//for (size_t i = 0; i < sizeC; i++)
	//{
	//	cout << arrC[i] << " ";
	//}
	//cout << endl;

	//int sizeC = 0;
	//for (size_t i = 0; i < size; i++)   // A
	//{
	//	for (size_t j = 0; j < size; j++) // B
	//	{
	//		if (arrA[i] == arrB[j])
	//		{
	//			bool flag = true;
	//			for (size_t k = 0; k < sizeC; k++)
	//			{
	//				if (arrA[i] == arrC[k]) 
	//				{
	//					flag = false;
	//					break;
	//				}
	//			}
	//			if (flag)
	//			{
	//				arrC[sizeC++] = arrA[i];
	//			}
	//		}
	//	}
	//}

	/*cout << "C = ";
	for (size_t i = 0; i < sizeC; i++)
	{
		cout << arrC[i] << " ";
	}
	cout << endl;*/





	///// 27.05.2024 //////

	//=============================================================================
	/*const int size = 10;
	int arr[size];
	srand(time(0));

	int minValue = 1, maxValue = 20;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/


	// Дан массив A размера N.Вывести вначале его элементы с четными
	// номерами(в порядке возрастания номеров), а затем — элементы с нечет -
	// ными номерами(также в порядке возрастания номеров) :


	//=============================================================================

	/*for (size_t i = 0; i < size; i += 2)
	{
		cout << arr[i] << " ";
	}
	for (size_t i = 1; i < size; i += 2)
	{
		cout << arr[i] << " ";
	}*/

	//=============================================================================

	// Дан массив размера N.Найти номер его первого локального миниму -
	// ма(локальный минимум — это элемент, который меньше любого из своих
	// соседей).

	/*int local_min = 1;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] < arr[i + 1] and arr[i] < arr[i - 1])
		{
			local_min = i;
			break;
		}
	}
	cout << local_min << endl;*/


	//=============================================================================

	// Дан массив размера N.Найти количество участков, на которых его
	// элементы монотонно возрастают.

	/*int res = 0;

	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			while (arr[i] > arr[i - 1])
			{
				i++;
			}
			res++;
		}
	}

	cout << res << endl;*/


	//=============================================================================


	// Дано число R и массив A размера N.Найти элемент массива, который
	// наиболее близок к числу R

	/*int r, ind;
	cin >> r;
	int dist = INT_MAX;
	for (size_t i = 0; i < size; i++)
	{
		if (abs(arr[i] - r) < dist)
		{
			dist = abs(arr[i] - r);
			ind = i;
		}
	}
	cout << ind << endl;*/


	//=============================================================================
	// 
	// Дан целочисленный массив размера N.Найти количество различных
	// элементов в данном массиве.




	/*int arr2[size];
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr2[count++] = arr[i];
		}
	}
	for (size_t i = 0; i < count; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;*/


	//=============================================================================

	/*int max = arr[0], min = arr[0], imax = 0, imin = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}

		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}
	int sum = 0;
	int start = (imin < imax) ? imin : imax;
	int end = (imin > imax) ? imin : imax;
	for (size_t i = start + 1; i < end; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;*/


	///// 24.05.2024 //////

	//=============================================================================


	// type name[size];



	//cout << arr << endl;

	/*arr[0] = 3;
	arr[1] = 23;
	arr[2] = 35;
	arr[3] = 83;*/
	//cout << arr[0] << endl;
	//const int size = 10;
	//int arr[size];
	//srand(time(0));

	//int a0, d;
	/*cin >> a0 >> d;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a0 + i * d;
	}*/

	/*int minValue = -10, maxValue = -1;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;*/

	//=============================================================================

	/*d = arr[1] - arr[0];
	bool f = true;
	for (size_t i = 1; i < size - 1; i++)
	{
		if (arr[i+1] - arr[i] != d)
		{
			f = false;
			break;
		}
	}
	if (f == true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}*/



	//=============================================================================


	/*int arr2[size];
	for (size_t i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;*/


	//=============================================================================


	/*for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}*/

	/*int count0 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count0++;
		}
	}
	cout << count0 << endl;

	int c01 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			c01++;
		}
		else
		{
			break;
		}
	}
	cout << c01 << endl;*/




	///// 17.05.2024 //////

	//=============================================================================

	// Ввести число.Если количество его разрядов меньше пяти, то вывести его на 
	// экран, дописав нули перед числом так, чтобы в итоге получилось пять знаков.
	// Если число пятизначное, то вывести его как есть.
	// 53
	// 00053
	// 458
	// 00458
	// 12365
	// 12365







	//=============================================================================

	//Имеется n бактерий красного цвета.Через 1 такт времени  красная бактерия 
	// меняется на зелёную, затем через 1 такт  времени делится на красную и 
	// зелёную.Сколько будет всех  бактерий через k тактов времени ?

	/*int k, red, green = 0;
	cin >> red >> k;

	for (int i = 1; i <= k; i++)
	{
		if (i % 2 != 0)
		{
			green += red;
			red = 0;
		}
		else
		{
			red += green;
		}
	}
	cout << "red: " << red << " green: " << green << endl;
	cout << red + green;*/


	//=============================================================================


	//  Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
	//	0.2, ..., 1 кг конфет.

	/*float price;
	cin >> price;
	for (float i = 0.1f; i <= 1.05f; i+=0.1f)
	{
		cout << i << " - " << price * i << endl;
	}*/


	///// 13.05.2024 //////


	//=============================================================================



	/*int k = 2;

	cout << " Пн Вт Ср Чт Пт";
	SetColor(LightRed, Black);
	cout << " Сб Нд" << endl;
	SetColor(White, Black);
	cout << "=====================" << endl;
	for (int i = 1 - k; i <= 31; i++)
	{
		SetColor(((i+k) % 7 == 6 || (i+k) % 7 == 0) ? LightRed:White, Black);
		if(i > 0)
			cout << setw(3) << i;
		else
			cout << setw(3) << " ";

		if ((i+k) % 7 == 0)
			cout << endl;

	}
	cout << endl;*/







	//=============================================================================


	/*for (int i = 0; i <= 20; i += 2)
	{
		cout << i << " ";
	}*/


	//=============================================================================

	/*typedef unsigned char UC;
	UC d = 0;

	for (int i = 0, j = 10; i < 10 && j > 0; i++, j--)
	{
		cout << i << " ";
	}


	for (int i = 10; i >= 0; i--)
	{
		cout << i << " ";
	}*/

	//=============================================================================

	//  Известно количество холодильников, имеющихся в продаже в каждом 
	//  из N магазинов города.Определить, сколько всего магазинов может 
	//  продать одновременно более 10 холодильников.


	/*int n, fridges = 0, shops = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Mag #" << i+1 << ": ";
		cin >> fridges;
		if (fridges > 10)
		{
			shops += 1;
		}
	}
	cout << shops << endl;*/


	//=============================================================================

	//  В городе N поликлиник.Известно, сколько врачей и сколько младшего 
	//	медицинского персонала работает в каждой поликлинике.Определить, 
	//	сколько медицинских работников работает во всех поликлиниках, 
	//	где врачей больше, чем младшего медицинского персонала.

	/*int n, s, m, res = 0;

	cout << "Введите количство поликлиник: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << "Введите количство старшего персонала в поликлинике: ";
		cin >> s;
		cout << "Введите количство младшего персонала в поликлинике: ";
		cin >> m;
		if (s > m)
		{
			res += s + m;
		}
	}

	cout << res << " персонала" << endl;*/

	//=============================================================================

	/*int n, res = 0;

	do
	{
		cout << "n = ";
		cin >> n;
		res += n;
	} while (n != 0);

	cout << res;*/



	///// 10.05.2024 //////


	/*int a = 1;

	while (a > 0)
	{
		cout << a++ << " ";
	}*/


	//=============================================================================

	//3751 = 16

	/*long long n, res = 0;

	cout << "n = ";
	cin >> n;

	while (n > 0)
	{
		res += n % 10;
		n /= 10;
	}
	cout << res << endl;*/


	//=============================================================================

	// Дано целое число N(> 0).Найти наибольшее целое число K, квадрат
	// которого не превосходит N : K2 ≤ N.Функцию извлечения квадратного кор -
	// ня не использовать.

	/*int n, k = 0;
	cout << "n = ";
	cin >> n;

	while (k * k <= n)
	{
		k++;
	}
	k--;
	cout << k << endl;*/


	//=============================================================================

	// Дано целое число N(> 0).Если оно является степенью числа 3, то вы -
	// вести True, если не является — вывести False.

	/*int n;

	cout << "n = ";
	cin >> n;

	int k = 1;
	while (k < n)
	{
		k *= 3;
	}
	if (k == n)
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}*/

	/*while (true)
	{

	}*/

	//====================================================================

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


	/*int n, n1, n2;
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
	}*/


	/*
		В восточном календаре принят 60 - летний цикл, состоящий из 12 - лет -
		них подциклов, обозначаемых названиями цвета : зеленый, красный, жел -
		тый, белый и черный.В каждом подцикле годы носят названия животных :
		крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, ку -
		рицы, собаки и свиньи.По номеру года определить его название, если 1984
		год — начало цикла : «год зеленой крысы».
	*/



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
	return 0;
}