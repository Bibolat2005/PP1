#include <bits/stdc++.h>

using namespace std;

int main(){

set <int> s;
int a, n;
cin >> n;

for(int i=0;i<n;i++){
    cin >> a;
    s.insert(a);
}

cout << s.size();

}