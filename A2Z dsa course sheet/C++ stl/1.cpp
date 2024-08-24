#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    
    //pairs inside pairs
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;
    
    //array of pairs
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}
void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    //emplace back is faster than push back
    
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    //entering pairs in vector by push back requires a 
    //curley braces but emplace back works without it.
    //it automatically assume it as pairs

    vector<int>ve(5,100);
    //this container contains 5 instances of 100 {100,100,100,100,100}


    vector<int>v(5);
    //this contains 5 instances of zero or garbage value , this
    //depends on compiler

    vector<int>v1(5,20);
    //this contains 5 instances of 20

    vector<int>v2(v1);
    //copying v1 to v2   



    //accessing elements from the vector

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();
    //we have to do it-- becuase end() iterator ko last ke
    //kinaare pahuncha deta hai
    
    // vector<int>::iterator it1=v.rend(); //never used
    
    // vector<int>::iterator it2=v.rbegin(); //never used
 
    cout<<v.back()<<" ";
    //printing the last element inside the vector



    //printing the vector

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //best way for each loop
    for(auto it:v){
        cout<<it<<" ";
    }
    //auto means automatically data type bana dega data ke hisaab se
    auto a="hello"; //computer ko pata chal gaya ki a string hai
    
    //{10,20,12,23}
    v.erase(v.begin()+1);
    //{10,12,23}

    //for erasing range , end ko ek zyada dena padta hai
    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4); //{10,20,35}


    //insert function
    //pointing iterator ke left me insert karta hai
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int>copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}


    //{10,20}
    cout<<v.size(); //2

    //{10,20}
    v.pop_back(); //{10}

    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2); //v1->{30,40},v2->{10,20}

















}
int main(){
    explainPair();
    return 0;
}