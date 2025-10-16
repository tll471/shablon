#include <iostream>	
using namespace std;
template <class T>

void Fill(T arr[][5], T size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 20 + 1;
		}
	}
}


int main()
{
	const int size = 5;
	int arr[size][size];
	Fill(arr, size);
	

	for (size_t i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << ", ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "По диагонали" << endl;
	
	int a = 0;
	int b = 21;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				cout << arr[i][j] << ", ";

				if (a < arr[i][j])
				{
					a = arr[i][j];
				}
				if (b > arr[i][j])
				{
					b = arr[i][j];
				}
			}
		}
	}
	cout << endl;
	cout << "Максимальное число по диагонале: " << endl;
	cout << a << endl;
	cout << "Минимальное число по диагонале: " << endl;
	cout << b << endl;


	
}