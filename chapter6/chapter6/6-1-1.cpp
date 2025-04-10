#include <iostream>
using namespace std;

void big(int* p, int size) {
	int max = *p;
	int min = *p;
}

void big(int a[], int size) {
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	cout << "최대: " << max << endl << "최소: " << min << endl;
}

int main() {
	int array[5] = { 1, 9, -2, 8, 6 };
	big(2, 3);
	big(array, 5);
}