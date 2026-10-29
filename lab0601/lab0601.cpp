#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Print(int* a, const int size);
int Count(int* a, const int size);
int Sum(int* a, const int size);
void Zero(int* a, const int size);

int main() {

	srand((unsigned)time(NULL));
	const int n = 23;
	int a[n];

	int Low = -19;
	int High = 25;

	Create(a, n, Low, High);
	Print(a, n);
	
	cout << "Count: " << Count(a, n) << endl;
	cout << "Sum: " << Sum(a, n) << endl;

	Zero(a, n);
	Print(a, n);

	return 0;

}


void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}


void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Count(int* a, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && !((a[i] % 4) == 0))
			k++;
	return k;
}

int Sum(int* a, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && !((a[i] % 4) == 0))
			S += a[i];
	return S;
}

void Zero(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 4 != 0)
			a[i] = 0;
}