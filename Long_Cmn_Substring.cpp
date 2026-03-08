// Longest Common SubString(Tabulation (Bottom-Up Approach))...
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "abcdgh";
    string y = "abedfhr";
    
    int n = x.size();
    int m = y.size();
    int max_l = 0;
    
    vector<vector<int>> t(n+1, vector<int>(m+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                max_l = max(max_l, t[i][j]);
            }
            else t[i][j] = 0;
        }
    }
    
    cout<<"Size of maxm. substring is "<<max_l;
    return 0;
}*/


// Print Longest Common Substring(First - Count, Second - Print)

#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "abcdghopt";
    string y = "abetsdghor";
    
    int n = x.length(), m = y.length(), maxL = 0, endIndex = 0;
    vector<vector<int>> t(n+1, vector<int>(m+1, 0));
    
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                if(t[i][j] > maxL){
                    maxL = t[i][j];
                    endIndex = i;
                }
            }
            else t[i][j] = 0;
        }
    }
    
    cout<<"Length of that SubString is "<<maxL;
    cout<<"\n\nThat SubString is "<<x.substr(endIndex - maxL, maxL);
    
    return 0;
}




/*Coding round ke liye:
✅ Bas Tabulation approach padh lo — enough hai.*/
