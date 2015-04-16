/*
Problem	:	FCTRL
Author	:	manojpandey
Algo	:	Math
			Power of prime p in n!
*/


#include <iostream>
using namespace std;
typedef long long LL;

LL expo(LL x, LL y) {
	LL i, product=1;
	for(i=0;i<y;i++) {
		product*=x;
	}
	return product;
}

int main() {
	
	LL n, num, sum, res, i;
	cin >> n;
	while (n--) {
		cin >> num;
		sum = 0;
		res = 1;
		i = 1;
		while (res != 0) {
			sum += num/expo(5,i);
			res = num/expo(5,i);
			i++;
		}
		cout << sum << endl;
	}
	return 0;
}