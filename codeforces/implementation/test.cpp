#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
for(int n=p;n<=q;n++){
    string t=to_string(n);
    int d=t.size();
    string k=to_string(n*n);
    string a,b;
   for(int i=k.size()-1;i>=0;i--){
       while(d--){
           b+=k[i];
           i--;
       }
       if(d==0)
       a+=k[i];
   }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int i=stoi(a);
    int j=stoi(b);
    if(i+j==n){
        cout<<n<<" ";
    }

}
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
