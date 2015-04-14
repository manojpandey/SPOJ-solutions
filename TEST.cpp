/*
Problem	:	TEST
Author	:	manojpandey
Algo	:	Cakewalk
*/

#include <iostream>
using namespace std;

int main() {
	int i,j, A[100];
	
	for(i=1;;i++) {
		cin>>A[i];
		if(A[i]==42){
			j=i;
			break;
		}
	}
	
	for(i=1;i<j;i++)
	cout << A[i] << endl;
	return 0;
}
