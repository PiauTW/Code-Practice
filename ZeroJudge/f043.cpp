#include <iostream>
using namespace std; int main(){ int a, b; cin >> a >> b; a == b ? a-3 < a-(a-3) ? cout << a-3 << "+" << a-a+3 << "=" << a << endl : cout << a-(a-3) << "+" << a-3 << "=" << a << endl : a-b < b ? cout << a-b << "+" << b << "=" << a << endl : cout << b << "+" << a-b << "=" << a << endl; }