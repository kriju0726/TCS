// Longest Common Subsequence(Recursive Approach)...
/*#include<bits/stdc++.h>
using namespace std;

int solve(string x, string y, int n, int m){
    if(n==0 || m==0) return 0;
    
    if(x[n-1] == y[m-1]) return 1 + solve(x, y, n-1, m-1);
    else return max(solve(x, y, n, m-1), solve(x, y, n-1, m));
}

int main(){
    string x = "abcdgh";
    string y = "abedfhr";
    
    int n = x.size(), m = y.size();
    
    cout<<"LCS..: "<<solve(x, y, n, m);
    return 0;
}*/




// Longest Common Subsequence(MemotiZation Approach(Top - Down))...
/*#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];

int solve(string x, string y, int n, int m){
    if(n==0 || m==0) return 0;
    
    if(t[n][m] != -1) return t[n][m];
    
    if(x[n-1] == y[m-1]) return t[n][m] = 1 + solve(x, y, n-1, m-1);
    else return t[n][m] = max(solve(x, y, n, m-1), solve(x, y, n-1, m));
}

int main(){
    string x = "abcdgh";
    string y = "abedfhr";
    
    memset(t, -1, sizeof(t));
    int n = x.size(), m = y.size();
    
    cout<<"LCS..: "<<solve(x, y, n, m);
    return 0;
}*/




// Longest Common Subsequence(Tabulation Approach(Bottom - Up))...
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "abcdgh";
    string y = "abedfhr";
    
    int n = x.size(), m = y.size();
    
    vector<vector<int>> t(n+1, vector<int>(m+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    
    cout<<"LCS..: "<<t[n][m];
    return 0;
}*/





// Print Longest Common Subsequence... (First.: Count., then Print.)

#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "acbcf";
    string y = "abcdef";
    int n = x.length(), m = y.length();
    
    vector<vector<int>> t(n+1, vector<int>(m+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    
    cout<<"Length of that Common Subsequence is "<<t[n][m];
    
    int i = n, j = m;
    string ans = "";
    
    while(i>0 && j>0){
        if(x[i-1] == y[j-1]){
            ans.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1] > t[i-1][j]) j--;
            else i--;
        }
    }
    
    reverse(ans.begin(), ans.end());
    
    cout<<"\nThat Subsequence is "<<ans;
    
    return 0;
}







