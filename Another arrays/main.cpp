#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 10;
	int arr[SIZE];
	int a, b;
	cout << "Введите минимальное значение: " << endl;; cin >> a;
	cout << "Введите максимальное значение: " << endl; cin >> b;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (b - a) + a;
	}

	//вывод массива на экран
	cout << "Вывод массива на экран: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl;

	int buffer = 0; //сортировка массива
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				buffer = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buffer;
			}
			//cout << arr[i] << "\t";
		}
	}	cout << endl;

	//вывод массива на экран
	cout << "Массив отсортирован в порядке возрастания элементов: " << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}