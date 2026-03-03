// UnBounded KnapSack(Coin Change(find max. no. of ways))...

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,5};
    int sum = 5, n=nums.size();
    
    vector<vector<int>> t(n+1, vector<int>(sum + 1, 0));
    
    for(int i=0; i<n+1; i++){
        t[i][0] = 1;
    }
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(nums[i-1] <= j)
            t[i][j] = t[i-1][j] + t[i][j-nums[i-1]];
            else t[i][j] = t[i-1][j];
        }
    }
    
    cout<<"Max. Profit..: "<<t[n][sum];
    
    return 0;
}
