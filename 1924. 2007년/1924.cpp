#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int count = 0;

	while (1) {
		b--;
		if (b == 0) {
			a--;
			if (a == 4 || a == 6 || a == 9 || a == 11) {
				b += 30;
			}
			else if (a == 2) b += 28;
			else b += 31;
		}
		if (a == 0) break;
		count++;
	}
	int c = count % 7;
	switch (c) {
	case 0:
		cout << "MON";
		break;
	case 1:
		cout << "TUE";
		break;
	case 2:
		cout << "WED";
		break;
	case 3:
		cout << "THU";
		break;
	case 4:
		cout << "FRI";
		break;
	case 5:
		cout << "SAT";
		break;
	case 6:
		cout << "SUN";
		break;
	}
}