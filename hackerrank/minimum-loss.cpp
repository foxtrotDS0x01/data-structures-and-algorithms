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
#define f first
#define s second


using namespace std;

// g++ --std=c++14 -o x.o x.cpp


long long minimumLoss(vector<pair<long long, long long>> price) {
	long long minValue = LLONG_MAX;
	sort(price.begin(), price.end());

	for(int i = 0; i < price.size() - 1; ++i) {
		if (price[i].second > price[i + 1].second) {
			minValue = min(minValue, price[i + 1].first - price[i].first);
		}
	}
	return minValue;
}


int main() {
	
	std::ios::sync_with_stdio(false);
	long long n, k;
	cin >> n;
	vector<pair<long long, long long>> price(n);
	for(int i = 0; i < n; ++i) {
		cin >> k;
		price.push_back(make_pair(k, i));
	}
	cout << minimumLoss(price) << endl;
	return 0;
}