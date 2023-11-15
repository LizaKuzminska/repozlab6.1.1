// lab6.1.1.cpp
// Кузьмінська Єлизавета
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 10
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Count(int* a, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (abs(a[i]) % 13 != 0 && abs(a[i]) % 2 != 0) {
			count++;
		}
	}
	return count;
}
void Zero(int* a, const int n) {
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 13 != 0 && (a[i] % 2 != 0))
			a[i] = 0;
}
int Sum(int* a, const int n) {
	int S = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 13 != 0 && abs(a[i]) % 2 != 0)
			S += a[i];
	return S;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int a[n];
	int Low = 15;
	int High = 85;
	Create(a, n, Low, High);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;
	cout << "Count = " << Count(a, n) << endl;

	Zero(a, n);
	Print(a, n);
	return 0;
}
