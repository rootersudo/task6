//
// att2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	
	setlocale(0, "RU");
	int n, m, i, j, k, t;
	cout << "Введите кол-во строк = кол-ву столбцов матрицы\n";
	cin >> n;
	int* ar = new int[n+2];
	int** arr = new int* [n+2];
	int* res = new int[n+2];
	int** ress = new int* [n+2];
	for (i = 0; i < n+2; i++) {
		arr[i] = new int[n+2];
		ress[i] = new int[n+2];
	}
	for (i = 1; i < n+1; i++) 
		for (j = 1; j < n+1; j++) {
			arr[i][j] = rand() % 15;
			ress[i][j] = -1;
		}
		cout << "матрица = : \n";
		for (i = 1; i < n+1; i++) {
			for (j = 1; j < n+1; j++) {
				//Sleep(345);
				cout <<setw(15)<< arr[i][j] ;
			}cout << endl;
		}
		m = 0;

	for (i = n ; i > 0; i--)
		for (j = n ; j > 0; j--) {
			
			if (arr[i][j] == arr[i][j + 1])m++;
		    if (arr[i][j] == arr[i + 1][j])m++;
			if (arr[i][j] == arr[i][j - 1])m++;
			if (arr[i][j] == arr[i - 1][j])m++;
			if (arr[i][j] == arr[i - 1][j - 1])m++;
			if (arr[i][j] == arr[i + 1][j + 1])m++;
			if (m > 0)ress[i][j] = 1; else if (m == 0)ress[i][j] = 0; m = 0;

		}




	cout << endl << "конечная матрица равна -> \n";
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			//Sleep(345);
			cout << setw(15) << ress[i][j];
		}cout << endl;
	}

	
	delete ar;
	delete arr;
	delete res;
	delete ress;

}

