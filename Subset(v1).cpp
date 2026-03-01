// All Subsets of given String...

/*
Enter your String...: ABC
ABC
AB_C
A_BC
A_B_C
*/

#include<bits/stdc++.h>
using namespace std; 

void print(string ip, string op){
    if(ip.length() == 0){
        cout<<op<<"\n";
        return ;
    }
    
    string op1 = op;
    string op2 = op;
    
    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    
    
    ip.erase(ip.begin() + 0);
    
    print(ip, op2);
    print(ip, op1);
}


int main(){
    string ip, op = "";
    cout<<"Enter your String...: ";
    cin>>ip;
    
    op.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    print(ip, op);
    
    return 0;
}



