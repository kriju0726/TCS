// Sorting using Recursion...
#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>& s, int e){
    if(s.size() == 0  ||  s.top() >= e){
        s.push(e);
        return ;
    } 
    
    int temp = s.top();
    s.pop();
    insert(s, e);
    s.push(temp);
}


void sorts1(stack<int>& s){
    int n= s.size();
    if(n == 1) return;
    
    int temp = s.top();
    s.pop();
    sorts1(s);
    insert(s, temp);
}


int main(){
    int n;
    cout<<"How many elements you have.?..: ";
    cin>>n;
    
    stack<int> s;
    cout<<"Enter your "<<n<<" elements...: ";
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        s.push(d);
    }
    
    
    sorts1(s);
    cout<<"After Sorting.: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}