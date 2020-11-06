#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

vector<int> vec;
int visit[1001];
int cycle;
int n;

//벡터를 매개변수로 쓰면 시간초과
void check_cycle(int v) {
	int next_node = 1;
	if (visit[v] == 0) {
		visit[v] = 1;
		check_cycle(vec[v]);
	}
	else {
		cycle++;
		for (int j = 2; j < n+1; j++) {
			if (visit[j] == 0)
				next_node = j;
		}
		if(next_node != 1)
			check_cycle(next_node);
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int test_case;
	vector<int> answer;

	cin >> test_case;

	for (int t = 0; t < test_case; t++) {
		cin >> n;

		vec.clear();
		vec.resize(n + 1);
		for (int i = 0; i < n + 1; i++) {
			visit[i] = 0;
		}
		cycle = 0;
		vec[0] = 0;
		for (int i = 1; i < n + 1; i++) {
			cin >> vec[i];
		}
		check_cycle(1);

		answer.push_back(cycle);

	}

	vector<int> ::iterator iter;
	for (iter = answer.begin(); iter != answer.end(); iter++) {
		cout << *iter << "\n";
	}


	return 0;



}