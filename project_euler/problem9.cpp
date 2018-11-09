#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

	
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		long long N;
		cin >> N;

		bool not_found = true;
		long long res = -1;
		for(int a = 1; a < N / 3 && not_found; ++a) {
			for(int b = a ; b < N/2 && not_found; ++b) {
				int c = N - (a + b);

				if ((a * a + b * b) == c * c){
					res = max(res,a * b * c);
				}
			}
		}

		cout << res << endl;


	}
	return 0;
}