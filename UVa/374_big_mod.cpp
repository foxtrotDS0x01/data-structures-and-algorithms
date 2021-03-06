/*
 * autoor : mxt111
 */
 
#include <vector>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <cmath>
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <complex>


#define distance(a, b) abs(a - b)
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
#define f first
#define s second


using namespace std;

// g++ --std=c++14 -o x.o x.cpp

long long power_of_p(long long b, long long p, long long m) {
    b %= m;
    long long res = 1;
    while (p > 0) {
        if (p&1) {
            res = res * b % m;
        }
        b = b * b % m;
        p >>= 1;
    }
    return res;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	long long b, p, m;
		
	while(cin >> b >> p >> m) {
        
        std::cout << power_of_p(b, p, m) << std::endl;
	}

	return 0;
}