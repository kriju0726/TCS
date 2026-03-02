// UnBounded KnapSack(Rod Cutting) using Tabulation Approach...

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> len = {1,2,3,4};
    vector<int> pri = {2,5,7,8};
    int rl = 8, n = 4;
    
    vector<vector<int>> t(n+1, vector<int>(rl+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<rl+1; j++){
            if(len[i-1] <= j) t[i][j] = max(pri[i-1] + t[i][j-len[i-1]], t[i-1][j]);
            else t[i][j] = t[i-1][j];
        }
    }
    
    cout<<"Max..: "<<t[n][rl];
    return 0;
}