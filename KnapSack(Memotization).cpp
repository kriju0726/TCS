// 0/1 KnapSack Problem (Memotization)...

#include<bits/stdc++.h>
using namespace std;

int t[101][101];

int knapsack(vector<int>& wt, vector<int>& val, int w, int n){
    if(n==0 || w==0) return 0;
    
    if(t[n][w] != -1) return t[n][w];
    
    if(wt[n-1] <= w){
        return t[n][w] = max(val[n-1] + knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
    }else{
        return t[n][w] = knapsack(wt, val, w, n-1);
    }
}


int main(){
    int n, w;
    memset(t, -1, sizeof(t));
    cout<<"Enter n..: ";
    cin>>n;
    cout<<"Enter Max. wt. of Knapsack..: ";
    cin>>w;
    
    vector<int> val(n), wt(n);
    
    cout<<"Now, Enter wt. of series of size "<<n<<" ..: ";
    for(int i=0; i<n; i++)
        cin>>wt[i];
    
    cout<<"Now, Enter val. of series of size "<<n<<" ..: ";
    for(int i=0; i<n; i++)
        cin>>val[i];
    
    
    cout<<"\nMaximum Profit..: "<<knapsack(wt, val, w, n);
    return 0;
}


