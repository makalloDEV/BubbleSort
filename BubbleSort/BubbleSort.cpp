#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "RU");

	int m[100];
	int n;

	cout << "Введите количество элементов массива (до 100): ";

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n - 1; i++) // проходка по всему массиву без последнего элемента (шаги алгоритма) 
	{
		bool isSorted = true;

		for (int j = 0; j < n - 1; j++) // проходка по всему массиву без последнего элемента (сравнение внутри массива)
		{
			
			if (m[j] > m[j + 1]) // сравнение двух рядом стоящих элементов массива
			{
				swap(m[j], m[j + 1]); // меняем местами, если левый элемент больше правого
				isSorted = false; 
			}
		}

		if (isSorted) // если массив уже отсортирован, то значение останется true и произойдет выход из цикла
		{
			break;
		}

	}

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}

}

