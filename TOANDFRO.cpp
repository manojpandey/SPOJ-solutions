/*
Problem	:	TOANDFRO
Author	:	manojpandey
Algo	:	Simulation
*/


#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	int c,r,i,j,k=0;
	char input[200];
	char A[100][100];

	cin>>c;
	while(c!=0) {
		
			cin>>input;
			r = strlen (input)/c;
			k=0;
			
			//Entering the array in desired 2-D form 
			
			for(i=0;i<r;i++) {
				if ( i % 2 == 0) {
					for( j = 0 ; j < c ; j++ )
					A[ i ][ j ] = input[k++];
				}
				
				else {
				for( j = c - 1 ; j >= 0 ; j-- )
					A[ i ][ j ] = input[k++];
				}
			}
				
			//Display
			
		for( j = 0 ; j < c ; j++ )
		{	
			i = 0;
			while ( i < r )
			{
				cout << A[ i ][ j ];
				i++;
			}	
		}
			cout<<endl;
			cin>>c;
	}

	return 0;
}