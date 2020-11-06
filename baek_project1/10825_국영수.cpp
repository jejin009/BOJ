#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;

struct student {
	string name;
	int kor, eng, math;
};

bool compare(student a, student b) {
	if (a.kor > b.kor) return true;
	else if(a.kor == b.kor){
		if (a.eng < b.eng) return true;
		else if (a.eng == b.eng) {
			if (a.math > b.math) return true;
			else if (a.math == b.math) {
				return a.name < b.name;
			}
		}
	}
	return false;
}

int main() {
	int n;

	cin >> n;
	vector<student> vec;

	vec.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i].name >> vec[i].kor >> vec[i].eng >> vec[i].math;
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << vec[i].name << "\n";
	}
}