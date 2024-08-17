#include <bits/stdc++.h>
using namespace std;

// Returns number of bits in the integer
constexpr int pct(int x) { return __builtin_popcount(x); }

int max(int a, int b)
{
	return a > b ? a : b;
}

int solve()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	vector<int> res; // Use vector instead of stack for better memory
	unordered_set<string> ms = {"+", "-", "*", "/"};
	int a, b, c;
	for (auto s : tokens)
	{
		if (ms.count(s))
		{
			b = res.back(), res.pop_back();
			a = res.back(), res.pop_back();
			if (s == "+")
				c = a + b;
			if (s == "-")
				c = a - b;
			if (s == "*")
				c = a * b;
			if (s == "/")
				c = a / b;
			res.push_back(c);
		}
		else
			res.push_back(stoi(s));
	}
	return res[0];
}

int main()
{
	cout << solve() << '\n';
	cout.flush();
	return 0;
}