// // C++ Program to demonstrate use of stringstream object
// #include <iostream>
// #include<vector>
// #include <sstream>
// #include<string>

// using namespace std;

// int main()
// {

//     string s = "hi my name is ashish";
//     stringstream obj(s);    
//     // string to store words individually
//     string temp;
//     vector<string>vec;
//     // >> operator will read from the stringstream object
//     while (obj >> temp) {
//         vec.push_back(temp);
//     }
//     for(auto x:vec){
//         cout<<x<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <sstream>
// #include <string>

// using namespace std;

// int main() {
//     string s = "hi my name is ashish"; // string with commas as delimiter
//     stringstream obj(s);    
//     string temp;
//     vector<string> vec;
    
//     // getline with a comma as a delimiter
//     while (getline(obj, temp, 'i')) {
//         vec.push_back(temp);
//     }

//     for (auto x : vec) {
//         cout << x << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string line = "10 20 30 40 50";
//     stringstream ss(line);
//     int number;
//     vector<int> numbers;

//     while (ss>>number) {
//         numbers.push_back(number);
//     }

//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <sstream>

// using namespace std;

// string trim(const string& str) {
//     stringstream ss(str);
//     string temp, result;
//     while (ss >> temp) {
//         if (!result.empty()) {
//             result += " ";
//         }
//         result += temp;
//     }
//     return result;
// }

// int main() {
//     string input = "   Hello     world    ";
//     string trimmed = trim(input);
//     cout << "Trimmed: '" << trimmed << "'" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// bool repeatedSubstringPattern(string s) {
//     string doubled = s + s;
//     return doubled.find(s, 1) != s.size();
// }

// int main() {
//     string s = "abaaba";
//     cout << (repeatedSubstringPattern(s) ? "Yes" : "No") << endl;  // Output: Yes
//     return 0;
// }

int main(){
    string s1="hello";
    string s2="Hello";
    cout<<s1.compare(s2)<<endl; 
    return 0;
}