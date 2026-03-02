// To Check Subset Sum exist or Not(Recursive Approach)...

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums, int sum, int n){
    if(sum == 0) return true;
    if(n == 0) return false;
    
    if(nums[n-1] <= sum)
        return (check(nums, sum - nums[n-1], n-1) || check(nums, sum , n-1));
    else
        return check(nums, sum, n-1);
    
    return 0;
}

int main(){
    vector<int> nums = {2,3,7,8,10};
    int sum = 28;
    int n = nums.size();
    
    if(check(nums, sum, n)) cout<<"Subset SumExist\n";
    else cout<<"Not Exist..";
    
    return 0;
}






