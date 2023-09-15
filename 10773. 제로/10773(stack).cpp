#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int>s;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	int sum = 0;
	int e = s.size();

	for (int i = 0; i < e; i++) {
		sum += s.top();
		s.pop();
	}

	cout << sum;
}
