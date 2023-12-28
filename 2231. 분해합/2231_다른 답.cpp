#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int result = 0;
	for (int i = 1; i < n; i++) {
		int sum = 0;
		int a = i;
		while (a != 0) {
			sum += a % 10;
			a /= 10;
		}
		if (sum + i == n) {
			result = i;
			break;
		}
	}
	cout << result;
}
	