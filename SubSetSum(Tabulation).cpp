// To Check Subset Sum exist or Not(Tabulation Approach)...

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,3,7,8,10};
    int sum = 15;
    int n = nums.size();
    
    vector<vector<bool>> t(n+1, vector<bool>(sum+1));
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0) t[i][j] = 0;
            if(j==0) t[i][j] = 1;
        }
    }
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(t[i][j] <= sum)
                t[i][j] = t[i-1][j - nums[i-1]] || t[i-1][j];
            else
                t[i][j] = t[i-1][j];
            
        }
    }
    
    
    cout<<t[n][sum];
    
    return 0;
}