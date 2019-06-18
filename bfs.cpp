#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<int> > graf;

const int INF = 1000000000;

int main()
{

	int n;
	cin >> n;
	graf.resize(n, vector<int>(n));
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n; ++i) {
			cin >> graf[i][j];
		}
	}

	int first, last;
	
	cin >> first >> last;
	
	first--;
	last--;
	
	queue<int> queue_graf;
	
	queue_graf.push(first);
	
	vector<int> used(n, INF);
	vector<int> p(n);
	
	p[first] = -1;
	used[first] = 0;
	
	while (!queue_graf.empty()) {

		int current = queue_graf.front();
		queue_graf.pop();
		if (current == last) {
			cout << used[last] << endl;
		}
		
		for (int i = 0; i < n; ++i) {
			if (used[i] == INF && graf[current][i] == 1) {
				queue_graf.push(i);
				used[i] = used[current] + 1;
				p[i] = current;
			}
		}
	}

	if (used[last] == INF)
		cout << "-1";
	else {
		vector<int> res;
		for (int v = last; v != -1; v = p[v])
			res.push_back(v);
		reverse(res.begin(), res.end());
		if (res.size() > 1) {
			for (int i = 0; i < res.size(); ++i)
				cout << res[i] + 1 << " ";
		}
	}
	
	return 0;
}
