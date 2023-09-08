#include <iostream>
using namespace std;

int main() {
	int n; // 수의 개수
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++) {
		int c = 0;
		int a;
		cin >> a;
		if (a > 1) {
			for (int i = 1; i <= a; i++) {
				if (a % i == 0) {
					c++;
				}
			}
		}
		if (c == 2) count++;
	}
	cout << count;
}
