#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[4001];

int main()
{
    int n, a, b, c;
    
    cin >> n >> a >> b >> c;
    
    for(int i = 1; i <= n; i++) {
        dp[i] = -1;
        
        if(i >= a && dp[i-a] >= 0 && dp[i-a] >= dp[i]) dp[i] = dp[i-a] +1;
        if(i >= b && dp[i-b] >= 0 && dp[i-b] >= dp[i]) dp[i] = dp[i-b] +1;
        if(i >= c && dp[i-c] >= 0 && dp[i-c] >= dp[i]) dp[i] = dp[i-c] +1;
    }
    
    cout << dp[n];
}
