// Лаба 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Задание 1
/*
#include <iostream>
#include <string>
using namespace std;

void print(string s)
{
	cout << s << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	string n;
	cin >> n;
	print(m.substr(2, 3));

	int index = n.find("a");
	print(to_string(index));
	if (index == 0) cout << "Символа а не найдено" << endl;
}
*/

//Задание 2
/*
#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool name(string a)
{
	regex n("[A-Z][a-z]*?");
	return regex_search(a, n);
}


int main()
{
	setlocale(LC_ALL, "");
	string m;
	cout << "Введите имя: " << endl;
	cin >> m;

	if (name(m)) cout << m << endl;
	else cout << "Ошибка" << endl;

	string n = "tita222@gmail.com, farifari@mail, game45@gmail.com";
	cmatch result;
	regex regular("([\\w-]+)(@)([\\w-]+)(\.)([a-z]{2,5})");
	auto words_begin = sregex_iterator(n.begin(), n.end(), regular);
	auto words_end = sregex_iterator();
	for (sregex_iterator it = words_begin; it != words_end; ++it)
		cout << it->str() << endl;

}
*/

//Задание 3
/*
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void read()
{
	fstream fs("f.txt");
	string line;
	while (getline(fs, line)) cout << line << '\n';
	fs.close();
}

void erase()
{
	fstream fs;
	fs.open("f.txt", fstream::out | fstream::trunc);
	fs.close();
}

void write(string& q)
{
	fstream fs;
	fs.open("f.txt", ios::app);
	fs << q << '\n';
	fs.close();
}

int main()
{
	setlocale(LC_ALL, "");
	float r;
	cout << "Введите радиус окружности: " << endl;
	cin >> r;
	float s = 2 * M_PI * r;
	cout << s << endl;
	float rs = trunc(s * 1000 + 0.5) / 1000;
	cout << rs << endl;

	fstream fs;

	fs.open("f.txt", ios::in);
	string data;
	fs >> data;
	cout << data << "\n";
	fs << "11111";
	fs.close();

	cout << "Введите текст: " << endl;
	string q;
	cin >> q;

	while (true)
	{
		if (q == "exit") break;
		else if (q == "read") read();
		else if (q == "erase") erase();
		else write(q);
	}
}
*/


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
