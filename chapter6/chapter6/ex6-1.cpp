/*
max = *p; to put the first value of the array to max;
for, i
	if, *(p+i) < max;
			max = *(p+i)
*/

/*
#include <iostream>
using namespace std;

void big(int a, int b) {
	if (a > b) cout << "置企: " << a << endl << "置社: " << b << endl;
	else cout << "置企: " << b << endl << "置社: " << a << endl;
}

void big(int a[], int size) {
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	cout << "置企: " << max << endl << "置社: " << min << endl;
}

int main() {
	int array[5] = { 1, 9, -2, 8, 6 };
	big(2, 3);
	big(array, 5);
}
*/