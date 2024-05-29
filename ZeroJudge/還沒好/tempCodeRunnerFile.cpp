#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n, maxx;
    cin >> n;
    vector<string> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    for(int i = 0; i < n; i++)
        maxx = max(maxx, int(v[i].length()));

    for(int i = 0; i < maxx; i++){
        for(int j = 0; j < n; j++){
            if(j < v[j].length() && !isdigit(v[j][i]))
                cout << v[j][i];
        }
    }
}