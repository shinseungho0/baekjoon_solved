#include <iostream>
#include <vector>
using namespace std;

void DFS(int index);

vector<vector<int>>v(1001, vector<int>(1001, 0));
vector<bool>visit;

int main() {
	int n, m; // n?� ?�드??개수, m?� 간선??개수
	cin >> n >> m;
	
	visit = vector<bool>(n + 1, false);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (visit[i] == false) {
			DFS(i);
			count++;
		}
	}
	cout << count;
}

void DFS(int index) {
	visit[index] = true;

	for (int i = 0; i < v[index].size(); i++) {
		int temp = v[index][i];
		if (visit[temp] == false) {
			DFS(temp);
		}
	}
}