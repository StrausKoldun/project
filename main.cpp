#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, int>> ms={{1, 2}, {2, 3}, {3, 4}};

    for(auto [a, b]:ms){
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
