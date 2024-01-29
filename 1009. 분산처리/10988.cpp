#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int c = a % 10;
		if (b == 1) {;
			if (c == 0) cout << 10 << '\n';
			else cout << c << '\n';
		}
		else {
			for (int j = 2; j <= b; j++) {
				c = c * a % 10;
			}
			if (c == 0) cout << 10 << '\n';
			else cout << c << '\n';
		}
	}
}