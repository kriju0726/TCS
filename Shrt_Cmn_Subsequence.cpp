// Shortest Super/Common SubSequence(First - Count., Second Print)...

#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "geek";
    string y = "eke";
    
    int n = x.length(), m = y.length();
    
    vector<vector<int>> t(n+1, vector<int>(m+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    
    cout<<"Size of SCS is "<<n+m-t[n][m];
    
    
    
    // Algom. for Printing...
    int i=n, j=m;
    string ans = "";
    
    while(i>0 && j>0){
        if(x[i-1] == y[j-1]){
            ans.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1] >= t[i-1][j]){
                ans.push_back(y[j-1]);
                j--;
            }
            else{
                ans.push_back(x[i-1]);
                i--;
            }
        }
    }
    
    while(i > 0){
        ans.push_back(x[i-1]);
        i--;
    }
    
    while(j > 0){
        ans.push_back(y[j-1]);
        j--;
    }
    
    reverse(ans.begin(), ans.end());
    
    cout<<"\nThat Subsequence is "<<ans;
    return 0;
}





