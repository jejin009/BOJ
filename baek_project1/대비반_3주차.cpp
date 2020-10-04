#include<iostream>
#include<vector>
using namespace std;

int main() {
	int T,max = 0;
	int arr[9];
	int i;

	arr[0] = 0;
	for (i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > arr[max])
			max = i;
	}

	cout << arr[max] << '\n' << max+1 << endl;


	return 0;
}
// find 함수도 사용 가능
// max함수도 사용 가능하다

