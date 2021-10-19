#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	long long dp[301][1001] = { 0 };
	dp[0][0] = 1;

	for (int i = 0; i <= 300; ++i)
		for (int j = 0; j + i <= 300; ++j)
			for (int k = 1; k <= 1000; ++k)
				dp[j + i][k] += dp[j][k - 1];

	string input;
	while (getline(cin, input))
	{
		stringstream ss(input);
		int i = 0;
		int n[3];
		while (ss >> n[i]) ++i;

		if (i == 1)
			cout << dp[n[0]][1000] << '\n';
		else if (i == 2)
			cout << dp[n[0]][n[1]] << '\n';
		else
			cout << (n[1] == 0 ? dp[n[0]][n[2]] : dp[n[0]][n[2]] - dp[n[0]][n[1] - 1]) << '\n';
	}
	return 0;
}