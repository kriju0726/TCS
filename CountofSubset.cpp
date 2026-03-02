// Count of a Subset of a given Sum(Using Tabulation Approach)...

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,5,11,5};
    int sum = 11, n=nums.size();
    
    vector<vector<int>> t(n+1, vector<int>(sum+1));
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i == 0) t[i][j] = 0;
            if(j == 0) t[i][j] = 1;
        }
    }
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(nums[i-1] <= sum)
                t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j];
            else
            t[i][j] = t[i-1][j];
        }
    }
    
    cout<<t[n][sum];
    
    return 0;
}





