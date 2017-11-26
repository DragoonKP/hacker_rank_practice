#include <iostream>
#include <vector>


using namespace std;
bool Prime (int ) ;
int main() {
    vector<int> a = {1,2,3,4,45, 89} ;
    int count = 0 ;
    for( int i = 0 ; i <a.size() ; i++) {
        if( Prime(a[i])) {
            cout << a[i] << endl ;
            ++count ;
        }
    }
cout << "there is :" << count <<" Prime number in the list" << endl ;
    return 0;
}

bool Prime ( int n ) {

if( n == 1) {
    return false ;
}
        for( int i = 2  ; i <= n/2 ; i++) {
            if(n%i ==0) {
                return false ; }
        }
    return true;

}













