#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int count = 0;
		for (int i = 0; i < 4; i++) {
			int n;
			cin >> n;
			if (n == 0) count++;
		}
		switch (count) {
		case 0:
			cout << 'E' << '\n';
			break;
		case 1:
			cout << 'A' << '\n';
			break;
		case 2:
			cout << 'B' << '\n';
			break;
		case 3:
			cout << 'C' << '\n';
			break;
		case 4:
			cout << 'D' << '\n';
			break;
		}
	}
}