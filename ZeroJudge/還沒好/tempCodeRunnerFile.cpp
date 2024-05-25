#include <iostream>
#include <vector>
using namespace std;

long long fN(vector<long long>& a, int m){
    if(m == 0 || m == 1)
        return 1;
    else
        return a[m-1] + a[m-2];
}

int main(){
    int m;
    vector<long long> a(60);
    a[0] = 1; a[1] = 1;
    for(int i = 2; i < 60; i++){
        a[i] = a[i-1] + a[i-2];
    }
    while(cin >> m && !cin.eof()){
        cout << fN(a, m);
    }
}