#include <iostream>
using namespace std;

int main() {
	int start, end;
	cin >> start >> end;
	int min = 10000;
	int sum = 0;
	int t = 0;

	for (int i = start; i <= end; i++) {
		int count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 2) {
			sum += i;
			if (i <= min) {
				min = i;
			}
		}
		else t++;
	}
	if (t == (end - start + 1)) {
		cout << -1;
	}
	else {
		cout << sum << '\n' << min;
	}
}