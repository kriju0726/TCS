#include<bits/stdc++.h>
using namespace std;

long long tower_of_hanoi(int n, char source, char helper, char destination){
    
    // Safe base case
    if(n <= 0) return 0;
    
    if(n == 1){
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return 1;
    }
    
    long long count = 0;
    
    // Step 1: Move n-1 disks to helper
    count = count + tower_of_hanoi(n-1, source, destination, helper);
    
    // Step 2: Move largest disk
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    count++;
    
    // Step 3: Move n-1 disks to destination
    count = count + tower_of_hanoi(n-1, helper, source, destination);
    
    return count;
}

int main(){
    int n;
    cout << "Enter no. of Plates..: ";
    cin >> n;
    
    long long totalSteps = tower_of_hanoi(n, 'A', 'B', 'C');
    
    cout << "\nTotal no. of Steps required is: " << totalSteps << endl;
    
    return 0;
}