#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// Project 2 — Jayden MB
// Track: gradebook | weather | inventory
// CIS 5 Week 08

int main() {
	const int N = 30;
	int a[N];

	srand(static_cast<unsigned>(time(nullptr)));

	for (int i = 0; i < N; ++i) {
		a[i] = rand() % 91 + 10;
	}

	const int aAt0 = 72;
	const int aAt10 = 90;
	const int aAt20 = 64;
	const int aAt27 = 34;

	a[0] = aAt0;
	a[10] = aAt10;
	a[20] = aAt20;
	a[27] = aAt27;

	cout << "Scores: ";
	for (int i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; ++i) {
		if (a[i] >= 90) {
			cout << "A: " << a[i] << endl;
		}
		else if (a[i] >= 80) {
			cout << "B: " << a[i] << endl;
		}
		else if (a[i] >= 70) {
			cout << "C: " << a[i] << endl;
		}
		else if (a[i] >= 60) {
			cout << "D: " << a[i] << endl;
		}
		else {
			cout << "F: " << a[i] << endl;
		}
	}
	return 0;
}
