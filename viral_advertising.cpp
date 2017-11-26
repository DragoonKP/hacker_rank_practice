#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int people = 5 ; 
    int days ; 
    int liked = 0 ; 
    cin >> days ; 
    int m = 0 ; 
    
    for ( int i = 0 ; i < days ; i++ ) {
        
        people =people /2 ; 
        liked = liked + people ; 
        people = people*3 ;    
        
        
    }
    
    cout << liked ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
