#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>v(1000, vector<int>(1000, 0));
vector<bool>visit(1000, false);

void DFS(int index);

int main() {
	int n; // 노드의 개수
	cin >> n;

	int m; // 간선의 개수
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int count = -1;
	DFS(1); // 1부터 탐색 시작
	for (int i = 1; i <= n; i++) { 
		if (visit[i] == true) {
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
