// /// #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define mod 998244353
// // int NumDigits(int x)
// // {
// //     x = abs(x);
// //     return (x < 10 ? 1 :
// //         (x < 100 ? 2 :
// //         (x < 1000 ? 3 :
// //         (x < 10000 ? 4 :
// //         (x < 100000 ? 5 :
// //         (x < 1000000 ? 6 :
// //         (x < 10000000 ? 7 :
// //         (x < 100000000 ? 8 :
// //         (x < 1000000000 ? 9 :
// //         10)))))))));
// // }
// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     ll a, b, n;
// //     cin >> a >> b >> n;
// //     string as;
// //     stringstream ss;
// //     ss << a;
// //     as = ss.str();
// //     ll t = as.size();
// //     ss.clear();
// //     ll size = t + n;
// //     // to count digits of a

// //     // if a is not divisible by b , then add 0 and increment from
// //     // that number until it is not divisible by b , total digits have to be n+a.size()
// // int loop=10;
// //     if (a % b != 0)
// //     {
// //         a = a * 10;
// //         while (loop--)
// //         {
// //             if (a % b == 0)
// //                 break;
// //             a++;
// //            t=NumDigits(a);
// //         }
// //     }
// //     string ans;
// //     stringstream zz;
// //         zz << a;
// //         ans = zz.str();

// //     while (size > t)
// //     {
// //         ans+='0';
// //         t++;
// //     }
// //     if(size==t){
// //         cout<<ans<<endl;
// //     }
// //     else{
// //         cout<<-1;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int a, b, n;
//     cin >> a >> b >> n;
//     bool exist(false);
//     for (int i = 0; i < 10; ++i)
//     {
//         if ((a * 10 + i) % b == 0)
//         {
//             cout << a * 10 + i;
//             string s(n - 1, '0');
//             cout << s << endl;
//             exist = true;
//             break;
//         }
//     }
//     if (!exist)
//     {
//         cout << -1 << endl;
//     }
//     return 0;
// }


