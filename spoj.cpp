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
	unordered_map<int, unordered_set<char>> r;	// row
	unordered_map<int, unordered_set<char>> c;	// column
	map<pair<int, int>, unordered_set<char>> b; // boxes

	for (int i = 0; i < 9; ++i) // O(9)
	{
		for (int j = 0; j < 9; ++j) // O(9)
		{
			if (board[i][j] != '.')
			{
				if (r[i].count(board[i][j]) == 1 ||
					c[j].count(board[i][j]) == 1 ||
					b[{i / 3, j / 3}].count(board[i][j]) == 1)
				{
					return false;
				}

				// .insert() for unordered_set is O(1)
				r[i].insert(board[i][j]);			   // O(1) * O(1)
				c[j].insert(board[i][j]);			   // O(1) * O(1)
				b[{i / 3, j / 3}].insert(board[i][j]); // O(log(9)) * O(1)
			}
		}
	}

	return true;
}

int main()
{
	cout << solve() << '\n';
	cout.flush();
	return 0;
}