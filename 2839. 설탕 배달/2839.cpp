#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	int q = n;
	if (q % 5 == 0) {
		cout << q / 5;
		return 0;
	}
	while (1) {
		if (q % 5 == 3) {
			cout << q / 5 + 1 + count;
			return 0;
		}
		else {
			if (q % 3 == 0 && q < 15) {
				cout << q / 3 + count;
				return 0;
			}
		}
		q -= 5;
		count++;
		if (q <= 0) {
			cout << -1;
			return 0;
		}
	}
	
}