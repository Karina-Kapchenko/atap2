#include <vector>
#include <iostream>
using namespace std;

int counter = 0;
vector<vector<int> > graf;

void dfs(int v, vector<bool>& vis) {
	
	vis[v] = true;
	counter++;
	for (int i = 0; i < vis.size(); i++) {
		if (graf[v][i] == 1 && !vis[i])
			dfs(i, vis);
	}
}

int main()
{

	int num, cur;
	cin >> num >> cur;
	vector<bool> visited(num, false);

	graf.resize(num, vector<int>(num));
	for (int j = 0; j < num; j++) {
		for (int i = 0; i < num; i++) {
			cin >> graf[i][j];
		}
	}
	dfs(cur - 1, visited);
	
	cout << counter;

	return 0;
}

