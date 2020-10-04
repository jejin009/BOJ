#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
	int s_num, max, student_num,count=0, i;
	vector<pair <int,int>> s;
	map<int, int> m;

	cin >> max >> student_num;

	for (i = 0; i < student_num; i++) {
		cin >> s_num;
		m[s_num] = i;
	}

	for (i = m.begin(); i != m.end(); i++) {
	}
	cout << student_num<< endl;

	return 0;
}