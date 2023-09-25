#include <iostream>
using namespace std;
 
int main() {
	int x[3];
	int y[3];
	cin >> x[0] >> y[0];
	cin >> x[1] >> y[1];
	cin >> x[2] >> y[2];
	int x1, y1;
	for (int i = 1; i <= 2; i++) {
		if (x[0] != x[i]) {
			x1 = (x[0] + x[i]) * 2;
		}
	}

	for (int i = 1; i <= 2; i++) {
		if (y[0] != y[i]) {
			y1 = (y[0] + y[i]) * 2;
			break;
		}
	}
	cout << x1 - x[0] - x[1] - x[2] << ' ' << y1 - y[0] - y[1] - y[2];
}