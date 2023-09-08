#include <iostream>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	int m = 0; // 최대공약수 
	

	if (a >= b) {
		for (int i = 1; i <= b; i++) {
			if ((a % i == 0) && (b % i == 0)) {
				m = i;
			}
		}
		int temp = a;

	}
	else {
		for (int i = 1; i <= a; i++) {
			if ((a % i == 0) && (b % i == 0)) {
				m = i;
			}
		}
	}

	int n = (a / m) * (b / m) * m; // 최소공배수
	

	cout << m << endl;
	cout << n;
}
