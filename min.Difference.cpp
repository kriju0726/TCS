// Minimum Subset Sum Difference...

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int n){
    int tsum = accumulate(nums.begin(), nums.end(), 0);
    
    vector<vector<bool>> t(n+1, vector<bool>(tsum/2 +1));
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<tsum+1; j++){
            if(i==0) t[i][j] = 0;
            if(j==0) t[i][j] = 1;
        }
    }
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<tsum+1; j++){
            if(nums[i-1] <= j) t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
            else t[i][j] = t[i-1][j];
        }
    }
    
    vector<int> validSum;
    
    for(int j=0; j<tsum/2 +1; j++)
        if(t[n][j]) validSum.push_back(j);
    
    int mn = INT_MAX;
    for(int s : validSum)
        mn = min(mn, abs(tsum - 2*s));
    
    return mn;
}

int main(){
    vector<int> nums = {1,2,7};
    int n = nums.size();
    
    cout<<"Mini. difference is..: "<<solve(nums, n);
    return 0;
}


