#define _CRT_SECURE_NO_WARNINGS
#define mp make_pair
#define ll long long
#define pb push_back
#define all(x) begin(x), end(x)
#pragma GCC optimize("O3")
// #pragma comment(linker, "/STACK:100000000000") 
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<sstream>
#include<unordered_set>
#include<unordered_map>
#include<list>
#include<stack>
using namespace std;
const int SIZE = 5100;
const ll inf = 1e9 + 7;

string solve(const string& s) {
    unordered_map<char, int> mp;
    for (auto& i : s)
        ++mp[tolower(i)];
    string ans = "";
    for (auto& i : s) {
        if (mp[tolower(i)] > 1) {
            ans += ')';
        }
        else ans += '(';
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    ++t; // for correct input
    while (t--) {
        string s;
        getline(cin, s, '\n');
        cout << solve(s) << endl;
    }
    return 0;
}
