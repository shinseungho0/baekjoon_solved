#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int s = 1;
		while (n - s != i - 1) {
			cout << " ";
			s++;
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n - 1; i > 0; i--) {
		int s = 1;
		while (n - s != i - 1) {
			cout << " ";
			s++;
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}