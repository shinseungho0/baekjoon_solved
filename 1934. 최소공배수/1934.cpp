#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k, s, t;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		if (a >= b) {
			for (int j = b; j > 0; j--) {
				if (a % j == 0 && b % j == 0) {
					k = j; 
					s = a / j;
					t = b / j;
					break;
				}
			}
		}
		else {
			for (int j = a; j > 0; j--) {
				if (a % j == 0 && b % j == 0) {
					k = j;
					s = a / j;
					t = b / j;
					break;
				}
			}
		}
		cout << k * s * t << '\n';
	}
}