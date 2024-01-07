#include <iostream>
using namespace std;

int main() {
	int arr[9] = { 0, };
	int a = 1;
	int b = 8;
	for (int i = 1; i <= 8; i++) {
		cin >> arr[i];
		if (arr[i] == a) a++;
		else if (arr[i] == b) b--;
	}
	if (a == 9) {
		cout << "ascending";
		return 0;
	}
	if (b == 1) {
		cout << "descending";
		return 0;
	}
	cout << "mixed";
}