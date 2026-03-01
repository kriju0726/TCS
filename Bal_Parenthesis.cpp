// Generate all Balanced Parenthesis(Using RECURSION)...

#include<bits/stdc++.h>
using namespace std;

void create(int open, int close, string op){
    if(open == 0  &&  close == 0){
        cout<<op<<" ";
        return;
    }
    
    if(open != 0){
        create(open-1, close, op+'(');
    }
    
    if(close > open){      
        create(open, close-1, op+')');
    }
    return;
}



int main(){
    int n;
    cout<<"Enter n..: ";
    cin>>n;
    
    int open = n, close = n;
    string op = "";
    
    cout<<"All Valid Parenthesis are as follows..: ";
    create(open, close, op);
    
    return 0;
}



