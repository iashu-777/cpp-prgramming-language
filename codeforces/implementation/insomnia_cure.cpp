#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<int>damage;
    damage.push_back(k);
    damage.push_back(l);
    damage.push_back(m);
    damage.push_back(n);
    vector<int>v(d+1,1);
    for(auto x:damage){
        for(int i=1;i<=(d/x);i++){
            v[i*x] = 0;
        }
    }
    int count = 0;
    for(auto x:v){
        if(x==0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}