#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;
int n;
int bi_num[20001];
bool check;
vector<string> answer;

void check_bipartite(vector<int> graph[20001], int init) {
	int v = init;

	for (int i = 0; i < graph[init].size(); i++) {
		int next = graph[init][i];
		if (bi_num[init] != 0 && bi_num[next] != 0 && bi_num[init] == bi_num[next])
			check = false;
		if (bi_num[next] == 0) {
			bi_num[next] = 1;
			if (bi_num[init] == 1)
				bi_num[next] = 2;
			check_bipartite(graph, next);
		}
	}
}

int main() {
	int k;

	cin >> k;

	for (int c = 0; c < k; c++) {
		vector<int> graph[20001];
		int e;
		int v1, v2;
		check = true;
		memset(bi_num, 0, sizeof(int) * 20001);

		cin >> n >> e;
		
		for (int j = 0; j < e; j++) {
			cin >> v1 >> v2;
			graph[v1].push_back(v2);
			graph[v2].push_back(v1);
		}

		for (int i = 0; i < n; i++) {
			if (bi_num[i] == 0) {
				bi_num[i] = 1;
				check_bipartite(graph,i);
			}
			if (!check) break;
		}
		if (check)
			answer.push_back("YES");
		else
			answer.push_back("NO");
	}

	vector<int> ::iterator iter;

	for (int i = 0; i < k; i++) {
		cout << answer.at(i) << "\n";
	}

	return 0;
}