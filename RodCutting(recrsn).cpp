// Rod Cutting Problem, Using Recursion Approach...
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& len, vector<int>& pri, int rl, int n){
    if(rl==0 || n==0) return 0;
    
    if(len[n-1] <= rl) return max(pri[n-1] + solve(len, pri, rl-len[n-1], n), solve(len, pri, rl, n-1));
    else return solve(len, pri, rl, n-1);
}

int main(){
    vector<int> len = {1,2,3,4};
    vector<int> pri = {2,5,7,8};
    int rl = 4, n = 4;
    
    cout<<"Max.: "<<solve(len, pri, rl, n);
    
    return 0;
}



