#include <iostream>
using namespace std;

int main() {
	int arr[9] = { 0, };
	int a = 2;
	int b = 7;
	for (int i = 1; i <= 8; i++) {
		cin >> arr[i];
	}
	if (arr[1] == 1) {
		for (int i = 2; i < 9; i++) {
			if (arr[i] == i) {
				a++;
				continue;
			}
			else break;
		}
		if (a == 9) {
			cout << "ascending";
			return 0;
		}
	}
	if (arr[1] == 8) {
		for (int i = 2; i < 9; i++) {
			if (arr[i] == 9 - i) {
				b--;
				continue;
			}
			else break;
		}
		if (b == 0) {
			cout << "descending";
			return 0;
		}
	}
	cout << "mixed";
}