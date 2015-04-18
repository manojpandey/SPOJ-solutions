/*
Problem :   ONP
Author  :   manojpandey
Algo    :   Stack
*/

#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;
typedef long long LL;
int main () {
    LL t, len, i;;
    cin >> t;
    char str[1000];
    stack <char> s;
    //s.push(10);
    while (t--)  {
        cin >> str;
        len = strlen (str);
        for( i = 0 ; i < len ; i++ ) {
        	//cout << "\n Stack at " << i+1 << "th iteration is : " << s.top() ;
            if(isalpha(str[i]))
                cout << str[i];
            else if(str[i] == ')' ) {
                cout << s.top ();
                s.pop ();
            }
            
            else if (str[i] != '(' )
                s.push (str[i]);
        }
        cout << endl;
    }

    return 0;
}