#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];
        long long dp[n];
        
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
            dp[i] = 1;
        }
        long long ans = 1;
        for(long long i = 1; i < n; i++){
            if(arr[i-1] <= arr[i]){
                dp[i] += dp[i-1];
            }
            ans += dp[i];
        }
        
        
        cout << ans << endl;
    }
	return 0;
}
