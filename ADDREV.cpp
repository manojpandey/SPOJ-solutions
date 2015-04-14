/*
Problem	:	ADDREV	
Author	:	manojpandey
Algo	:	Ad-Hoc
*/


#include <iostream>
using namespace std;

int reverse (int number) {
   int res = 0;
   while (number > 0) {
      res = res * 10 + number%10;
      number /= 10;
   }
   return res;
}

int main() {
	long i,n,x,y;
	cin>>n;
	while(n--) {
			cin >> x >> y;
			cout << reverse(reverse(x)+reverse(y)) << endl;
	}
	return 0;
}