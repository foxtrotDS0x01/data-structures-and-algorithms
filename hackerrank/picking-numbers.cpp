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
	int n;
    cin >> n;
    vector<int> nums(n);
    unordered_map<int, int> occur;
    unordered_set<int> keys;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        ++occur[nums[i]];
        keys.insert(nums[i]);
    }  

    int maxLen = numeric_limits<int>::min();

    for(int val: keys) {
        if (occur.count(val + 1)) {
            maxLen = max(maxLen, occur[val] + occur[val + 1]);
        } else {
            maxLen = max(maxLen, occur[val]);
        }
    }
    cout << maxLen << endl;


	return 0;
}