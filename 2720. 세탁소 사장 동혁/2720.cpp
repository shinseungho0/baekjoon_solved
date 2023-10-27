#include <iostream>
using namespace std;

int main() {
	int n; // 입력수
	cin >> n;
		
	for (int i = 0; i < n; i++) {
		int a, q = 0, d = 0, ni = 0, p = 0;
		cin >> a;
		while (a >= 25) {
			a -= 25;
			q++;
		}
		while (a >= 10) {
			a -= 10;
			d++;
		}
		while (a >= 5) {
			a -= 5;
			ni++;
		}
		while (a >= 1) {
			a -= 1;
			p++;
		}
		cout << q << ' ' << d << ' ' << ni << ' ' << p << endl;
	}	
}