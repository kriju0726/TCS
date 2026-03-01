// Letter Case Permutation...

#include<bits/stdc++.h>
using namespace std;

void print(string ip, string op){
    if(ip.length() == 0){
        cout<<op<<"\n";
        return ;
    }
    
    
    
    if(isdigit(ip[0])){
        op.push_back((ip[0]));
        ip.erase(ip.begin() + 0);
        print(ip, op);
    }else{
        string op1 = op;
        string op2 = op;
         op1.push_back(toupper(ip[0]));
         op2.push_back(tolower(ip[0]));   
         ip.erase(ip.begin() + 0);
    
    print(ip, op1);
    print(ip, op2);
    }
    
    
}


int main(){
    string ip, op = "";
    cout<<"Enter your String.: ";
    cin>>ip;
    
    print(ip, op);
    
    return 0;
}






