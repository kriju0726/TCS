// Now Using Recursion  UnBounded KnapSack(Coin Change(find max. no. of ways))...
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int sum, int n){
    if(n==0) return 0;
    if(sum==0) return 1;
    
    if(nums[n-1] <= sum) return solve(nums, sum-nums[n-1], n) + solve(nums, sum, n-1);
    else return solve(nums, sum, n-1);
}

int main(){
    vector<int> nums = {1,5,10};
    int sum = 0, n = nums.size();
    
    cout<<"Max Profit..: "<<solve(nums, sum, n);
    
    return 0;
}


