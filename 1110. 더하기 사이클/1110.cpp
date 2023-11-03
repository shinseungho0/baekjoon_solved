#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int tmp, a = n;
	int count = 0;

	while (1) {
		tmp = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		count++;
		n = tmp;
		if (a == tmp) break;
	}
	cout << count;
}