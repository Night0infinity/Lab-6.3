#include <iostream>  

#include <iomanip>  

#include <time.h>  
using namespace std;

void random(int* mas, const int size, const int min, const int max) {

	for (int i = 0; i < size; i++) {

		mas[i] = min + rand() % (max - min + 1);
	}
}

void wivid(int* mas, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << mas[i];
	cout << setw(4) << endl;
}

int suma(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] > 0)
			sum += mas[i];
	}
	return sum;
}

template <typename Q>
Q randomtemp(Q* mas, Q size, Q min, Q max) {

	for (int i = 0; i < size; i++) {
		mas[i] = min + rand() % (max - min + 1);
	}
	return 0;
}

template <typename W>
W wividtemp(W* mas, W size) {
	for (int i = 0; i < size; i++)
		cout << " " << mas[i];
	cout << " " << endl;
	return 0;
}

template <typename E>
E sumatemp(E* mas, E size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] > 0)
			sum += mas[i];
	}
	return sum;
}

int main() {

	srand((unsigned)time(NULL));
	int min = -100;
	int max = 100;
	const int n = 25;
	int a[n];

	random(a, n, min, max);
	wivid(a, n);
	cout << endl;
	int sum = suma(a, n);
	cout << "Sum: " << sum << endl;
	cout << endl;

	randomtemp(a, n, min, max);
	wividtemp(a, n);
	cout << endl;
	int sum2 = sumatemp(a, n);
	cout << "Sum: " << sum2 << endl;
	cout << endl;


	return 0;
}
