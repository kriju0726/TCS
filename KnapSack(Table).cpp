// 0/1 KnapSack Problem (Tabulation)...

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w;
   
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
    
    vector<vector<int>> t(n+1, vector<int>(w+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<w+1; j++){
            if(wt[i-1] <= j){
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    
    cout<<"\nMaximum Profit..: "<<t[n][w];
    return 0;
}