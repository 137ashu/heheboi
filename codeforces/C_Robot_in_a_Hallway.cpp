#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>> &v, vector<vector<int>> &dp, int i, int j, int t){
    if(i<0 || j< 0 || i>1 || j>=v[0].size())(
        return 0;
    )
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if(v[i][j]>t){
        t = v[i][j] + 1;
    }
    else{
        t += 1;
    }
    dp[i][j] =  min(bfs(v, dp, i+1, j, t), bfs(v, dp, i, j+1, t), 
                          bfs(v, dp, i-1, j, t), bfs(v, dp, i, j-1, t));

    return dp[i][j] ;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        int in;
        vector<vector<int>> v(2, vector<int> (n));
        vector<vector<int>> dp(2, vector<int> (n, -1));
        for(int i = 0 ; i<n; i++){
            cin >> in;
            v[0][i] = in;
        }
         for(int i = 0 ; i<n; i++){
            cin >> in;
            v[1][i] = in;
        }
        int ans = bfs(v, dp, 0, 0, 0);
        cout << ans <<endl;
    }
    return 0;
}