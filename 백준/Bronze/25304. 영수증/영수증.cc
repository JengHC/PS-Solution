#include<iostream>
using namespace std;

int main() {
	int x, n; // 총 금액, 물건 종류 수
	int a, b; // 가격, 개수
	int sum = 0;

	cin >> x >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum += a * b;
	}

	if (x == sum)
		cout << "Yes";
	else
		cout << "No";
}