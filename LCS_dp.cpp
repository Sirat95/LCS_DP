#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int n, m;
int dp[1005][1005];

int LCS(int i, int j) {

    if (i == n|| j == m) return 0;

    if (dp[i][j]!= -1) return dp[i][j];

    if (s1[i] == s2[j]) {
        return dp[i][j] = 1 + LCS(i + 1,j + 1);
    }

    int op1 = LCS(i, j + 1);
    int op2 = LCS(i + 1, j);

    return dp[i][j] = max(op1, op2);
}

int main() {
    cout << "Enter first & second String: ";

    cin>>s1>>s2;

    n = s1.size();
    m = s2.size();

    memset(dp,-1,sizeof(dp));

    cout << LCS(0,0)<< endl;

    return 0;
}
