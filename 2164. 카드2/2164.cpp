#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n; 
	cin >> n;
	queue<int>q;
	
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	for (int i = 0; i < n - 1; i++) {
		q.pop();
		int tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	cout << q.front();
}