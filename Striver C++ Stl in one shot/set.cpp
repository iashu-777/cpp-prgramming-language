#include<bits/stdc++.h>
using namespace std;
int main(){
  set<int>st;
  st.insert(1);//{1}
  st.emplace(2);//{1,2}
  st.insert(2);//{1,2}
  st.insert(4);//{1,2,4}
  st.insert(3);//{1,2,3,4}
  st.insert(5);//{1,2,3,4,5}

  //Functionality of insert in vector
//   can be used also ,that only increases
//   efficiency

//   begin(),end(),rbegin(),rend(),size()
//   empty() and swap() are same of those of above

  //{1,2,3,4,5}
  auto it=st.find(3);
  //{1,2,3,4,5}
  auto it=st.find(6);
  
  //{1,2,3,4,5}
  st.erase(5); //takes logarithmic time

    int cnt=st.count(1);
    auto it=st.find(3);
    st.erase(it); //it takes constant time

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} {first,last}

    //lower_bound() and upper_bound() function works in the same way

    
}