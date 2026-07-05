

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll a1, b1;
        cin >> a1 >> b1;

        ll count1 = 0, count2 = 0;

        {
            ll a = a1, b = b1;
            ll i = 1;
            bool white = true;

            while(true){
                if(white){
                    if(a < i) break;
                    a -= i;
                } else {
                    if(b < i) break;
                    b -= i;
                }
                count1++;
                i *= 2;
                white = !white;
            }
        }

        {
            ll a = a1, b = b1;
            ll i = 1;
            bool white = false;

            while(true){
                if(white){
                    if(a < i) break;
                    a -= i;
                } else {
                    if(b < i) break;
                    b -= i;
                }
                count2++;
                i *= 2;
                white = !white;
            }
        }

        cout << max(count1, count2) << "\n";
    }
    return 0;
}
