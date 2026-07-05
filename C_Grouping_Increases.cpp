#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        // Infinity se initialize karo taaki starting elements penalty na dein
        // Aur v2.back() crash na kare
        vector<ll> v1 = { (ll)1e18 }; 
        vector<ll> v2 = { (ll)1e18 };

        ll count = 0;
        for(ll i=0; i<n; i++){
            // 1. Agar dono mein fit hota hai, toh "Tighter Fit" (chote wale) pe daalo
            if(v[i] <= v1.back() && v[i] <= v2.back()){
                if(v1.back() < v2.back()) v1.push_back(v[i]);
                else v2.push_back(v[i]);
            }
            // 2. Agar sirf v2 mein fit hota hai
            else if(v[i] <= v2.back()){
                v2.push_back(v[i]);
            }
            // 3. Agar sirf v1 mein fit hota hai
            else if(v[i] <= v1.back()){
                v1.push_back(v[i]);
            }
            // 4. Agar kisi mein fit nahi hota (Penalty Case)
            // Toh chote wale tail ko replace karo taaki bada wala safe rahe
            else {
                if(v1.back() < v2.back()) v1.push_back(v[i]);
                else v2.push_back(v[i]);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}