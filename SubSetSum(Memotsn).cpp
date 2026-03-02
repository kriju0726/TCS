// To Check Subset Sum exist or Not(Memotisation Approach)...

#include<bits/stdc++.h>
using namespace std;

int t[101][101];

bool check(vector<int>& nums, int sum, int n){
    if(sum == 0) return true;
    
    if(n == 0) return false;
    
    if(t[n][sum] != -1) return t[n][sum];
    
    if(nums[n-1] <= sum)
        return t[n][sum] = (check(nums, sum - nums[n-1], n-1) || check(nums, sum , n-1));
    else
        return t[n][sum] = check(nums, sum, n-1);
    
    return 0;
}

int main(){
    vector<int> nums = {2,3,7,8,10};
    memset(t, -1, sizeof(t));
    int sum = 28;
    int n = nums.size();
    
    if(check(nums, sum, n)) cout<<"Exist\n";
    else cout<<"Not Exist..";
    
    return 0;
}


