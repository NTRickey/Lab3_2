#include<iostream>
#include<clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	double a,b,c;
	cin >> a >> b >> c;
	double ab = 0, ac = 0, bc = 0;
	if (a < b and b < c) {
		ab = b - a;
		ac = c - a;
		bc = c - b;
		cout << ab << ' ' << ac << ' ' << bc << ' ';
	}
	double max;
	max = ab;
	if (max < ac) {
		max = ac;
	}
	if (max < bc) {
		max = bc;
	}
	cout << max;
}

	