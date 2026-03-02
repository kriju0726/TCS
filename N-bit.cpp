// Print N-bit Binary Number(where, no.s of ZEROS not greater than no.s of ONES)...

#include<bits/stdc++.h>
using namespace std;


void create(string op, int ones, int zeros, int n){
    if(n == 0){
        cout<<op<<" ";
        return;
    }
    
    if(ones > zeros){
        create(op+'1', ones+1, zeros, n-1);
        create(op+'0', ones, zeros+1, n-1);
    }
    
    if(ones == zeros){
        create(op+'1', ones+1, zeros, n-1);
    }
    return ;
}



int main(){
    int n;
    cout<<"Enter n..: ";
    cin>>n;
    
    string op = "1";
    
    cout<<"All Valid N-bit Binary Numbers are as follows..: ";
    create(op, 1, 0, n-1);
    
    return 0;
}



