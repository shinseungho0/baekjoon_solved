#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			for (int j = b; j > 0; j--) {
				if (a % j == 0 && b % j == 0) {
					cout << (a / j) * (b / j) * j << ' ' << j << '\n';
					break;
				}
			}
		}
		else {
			for (int j = a; j > 0; j--) {
				if (a % j == 0 && b % j == 0) {
					cout << (a / j) * (b / j) * j << ' ' << j << '\n';
					break;
				}
			}
		}
	}
}