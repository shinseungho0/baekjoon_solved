#include <iostream>
using namespace std;

int Euclid(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	long long int a,  b;
	cin >> a >> b;
	int e = Euclid(a, b); // 최대공약수
	cout << a * b / e; // 최소공배수
}