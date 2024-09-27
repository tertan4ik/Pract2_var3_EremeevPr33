// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void massives()
{
	int num[10] = { 10,8,5,21,14,7,31,9,12,53 };
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
		if (num[i] % 2 == 0)
		{
			count++;
		}
	}
	cout << "\nКоличество четных элементов в массиве: " << count;

}
void mnmassives()
{
	int num[3][3] = { {12,14,6},{15,21,39},{18 ,10, 20} };
	int num1[3][3];
	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 3; ++j) 
{
			num1[i][j] = num[j][i];
		}
	}
	cout << "Изначальный массив:\n";
	for (int i = 0; i < 3; ++i) {
		cout << "\n";

		for (int j = 0; j < 3; ++j) {
			cout << num[i][j] << " ";
		}

	}

	cout << "\nТранспонированный массив:\n";
	for (int i = 0; i < 3; ++i) {
		cout << "\n";

		for (int j = 0; j < 3; ++j) {
			cout << num1[i][j] << " ";
		}

	}
	cout << "\n";
}
void structs()
{
	struct Employee {
		string name;
		int salary;
		void salaryup()
		{
			salary += (salary / 10);

		}
	};
	Employee emp1;
	Employee emp2;
	emp1.name = "VASA PUPKIN";
	emp1.salary = 50000;
	emp2.name = "NEVASA NEPUPKIN";
	emp2.salary = 80000;
	cout << "Имя: " << emp1.name << "; Зарплата: " << emp1.salary;
	cout << "\nИмя: " << emp2.name << "; Зарплата: " << emp2.salary;
	emp1.salaryup();
	emp2.salaryup();
	cout << "\nИзмененные значения:\n";
	cout << "Имя: " << emp1.name << "; Зарплата: " << emp1.salary;
	cout << "\nИмя: " << emp2.name << "; Зарплата: " << emp2.salary;
}
void classes()
{
	class Car
	{
	private:
		string brand;
		string model;
	public:
		void output()
		{
			    cout << "\nOutput" 
				<< "\nBrand:" << brand 
				<< "\nModel:" << model;
		}
		void input()
		{
			cout << "Input\n" << "input brand: ";
			cin >> brand;
			cout << "input model:";
			cin >> model;
		}
	};
	Car car;
	car.input();
	car.output();
}
int main()
{
	try
	{
		int number;
		cout << "\nВыберите программу:\n1-Массивы\n2-Многомерные масивы\n3-Структуры\n4-Классы\n5-Выход\n";
		cin >> number;
		switch (number)
		{
		case 1:
			massives();
			main();
			break;
		case 2:
			mnmassives();
			main();
			break;
		case 3:
			structs();
			main();
			break;
		case 4:
			classes();
			main();
			break;
		case 5:
			break;
		default:
			cout << "Error";
			main();
			break;
		}

	}
	catch (...)
	{
		cout << "Error";
	}


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

