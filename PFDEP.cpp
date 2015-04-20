/*
Problem :   PFDEP
Author  :   manojpandey
Algo    :   Topological Sort
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define rep(i,n) for (i=0; i<n ; i++)
#define rep1(i,n) for (i=1; i<=n ; i++)
#define MAX 111

int n, e, a[MAX];
vector <int> g[MAX];

void topsort(){
    int i;
    set <int> s;
    rep1(i,n) if( a[i] == 0 ) s.insert(i) ;
    while(!s.empty()){
        int u = *s.begin(); s.erase(s.begin()); cout << u << " ";
        tr(g[u],it){
            a[*it]--;
            if( !a[*it ] ) s.insert(*it) ;
        }
    }
}

int main() {
	int m, i, u, k , j, v;
	freopen ("in.txt", "r", stdin);
	scanf("%d%d", &n, &m);
	rep(i,m) {
		scanf("%d%d", &v, &k);
		a[v] += k;
		rep(j,k) {
			scanf("%d", &u);
			g[u].push_back(v);
		}
	}
	topsort();
	printf("\n");
	return 0;
}

/*
Sample: 
5 4
3 2 1 5
2 2 5 3
4 1 3
5 1 1
*/
