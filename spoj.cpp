#include <bits/stdc++.h>
using namespace std;
using db = double;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
using str = string;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vd = vector<double>;
using vll = vector<ll>;
using vs = vector<str>;
using vc = vector<char>;

// vector operations
#define sz(x) int(size(x))
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second

constexpr int pct(int x) { return __builtin_popcount(x); }	// Returns number of bits in the integer

// Run and compile the program
// g++ -o s spoj.cpp && ./s

int max(int a, int b)
{
	return a > b ? a : b;
}

int solve()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string s = "hello";
	int total = 0;
	for(int i = 0; i < s.size() - 1; ++i) {
		total += abs((s[i] - '0') - (s[i + 1] - '0')); 
	}

	cout << total << '\n';
	
	return 0;
	
}

int main()
{
	cout << solve() << '\n';
	cout.flush();
	return 0;
}