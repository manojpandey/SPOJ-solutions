/*
Problem	:	LASTDIG
Author	:	manojpandey
Algo	:	Modular Expo, or Precomputing
*/

#include <iostream>
using namespace std;
typedef long long ll;

int digits[][4] = {
 {0,0,0,0},
 {1,1,1,1},
 {2,4,8,6},
 {3,9,7,1},
 {4,6,4,6},
 {5,5,5,5},
 {6,6,6,6},
 {7,9,3,1},
 {8,4,2,6},
 {9,1,9,1}
};

int lastdig(ll base, ll exponent) {
	if(exponent == 0) return 1;
	int index = base % 10;
	return digits[index][(exponent-1)%4];
}

int main() {

	int t;
	cin >> t;
	while (t--) {
		ll base, exponent;;
		cin >> base >> exponent;
		cout << lastdig (base,exponent) << endl;
	}
	return 0;
}