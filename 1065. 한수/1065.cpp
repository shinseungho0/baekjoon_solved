#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	if (n < 100) {
		cout << n;
		return 0;
	}
	else {
		count = 99;
		for (int i = 100; i <= n; i++) {
			int a, b, c;
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if (a - b == b - c) count++;
		}
	}
	cout << count;
}