/*
Problem :   ETF
Author  :   manojpandey
Algo    :   Number Theory
*/

#include <iostream>
using namespace std;
typedef long long LL;

LL etf (LL n) { 
	LL i, result = n; 
	for( i = 2 ;i*i <= n ; i++) { 
   		if (n % i == 0) result -= result / i; 
    	
    	while (n % i == 0) n /= i; 
	} 
	if (n > 1) result -= result / n; 
	return result; 
} 

int main() {
	LL t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << etf (n) << endl ;	
	}
	return 0;
}