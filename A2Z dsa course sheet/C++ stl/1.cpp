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

    v.clear(); //erases the entire vector

    cout<<v.empty(); //it says 0 if any element is present in vector

}
void explainList(){
    list<int>ls;

//list vector ki tarah hai , bas list me front me bhi push ho jata hai

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    
    ls.push_front(5); //{5,2,4}
//insert function of vector is costly
//time comp. wise pushfront function is cheaper than insert of vector 
//vector uses singly linked list , and list uses doubly linked list


    ls.emplace_front(); //{2,4};

    //rest functions same as vector
    //begin,end,rbegin,rend,clear ,insert, size , swap
}

void explainDequeue(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front();//{4,1}

    dq.back();

    dq.front();

    //rest functions same as vector
    //begin,end,rbegin,clear,insert,size,swap

}
void explainStack(){
//LIFO-last in first out

    //every operation has O(1) time
    stack<int>st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top();  //prints 5 "** st[2] is invalid ,index accessing is not allowed"

    st.pop(); //st looks like{3,3,2,1}
    
    cout<<st.top(); //3

    cout<<st.size(); //4

    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);
}

void explainQueue(){
//FIFO-first in first out

    queue<int>q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back()+=5;

    cout<<q.back(); //prints 9

    //q is {1,2,9}
    cout<<q.front();// prints 1

    q.pop(); //{2,9}

    cout<<q.front(); //prints 2

    //size swap empty same as stack
}

void explainPQ(){
    priority_queue<int>pq;
//priority means largest will come on top
//int means largest int 
//string means largest string lexicographically upar rahega
//char means largest char upar rahega
//matlab badi height wala queue me sabse aage lagega

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}
//push O(log n)
//top O(1)
//pop O(log n)

    cout<<pq.top(); //prints 10

    pq.pop(); //{8,5,2}

    cout<<pq.top(); //prints 8

    //size swap empty function same as others

    //Minimum heap
    //an aisa priority queue banaya jisme chhota wala 
    //aage rahega
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5); //{5}
    pq.push(2);// {2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<<pq.top(); //prints 2

}
void explainSet(){
     set<int>st; //sorted and unique and done
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
  auto it=st.find(6); //if the element is not present
  //in the set to find return end iterator which point right 
  //after the end
  
  //{1,2,3,4,5}
  st.erase(5); //takes logarithmic time

    int cnt=st.count(1);
    //if set has a occurence of an element then count returns
    //1 otherwise it returns zero

    auto it=st.find(3);
    st.erase(it); //it takes constant time

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} {first,last}

    //lower_bound() and upper_bound() function works in the same way

    
}

void explainMultiSet()
{
    //it only obeys sorted property , uniqueness is finsished
    //everythign is same as set
    //only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    
    ms.erase(1); //all 1's are erased
    int cnt=ms.count(1);

    //only a single one erased kyunki particular iterator diya hai
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1),ms.find(1)+2); line has error dekna hai kya galti hai

    //rest all function same as set

}
void explainUnorderedSet(){
    unordered_set<int>st;//O(1) time in most cases

       
    //unique karta hai bas sorted nai karta , random karta hai

    //lower bound and upper bound functions does not work
    //rest all functions are same
    //as above, it does not stores in any particular order 
    //it has a better complexity than set in most cases, except
    //some when collision happens

}

void explainMap(){
//map stores everything with repect of key value pair , 
//key is unique and sorted and value can be duplicate 
//key can be any data type or container
//and value also

    map<int,int>mpp;

    map<int,pair<int,int>>mpp;
    //pair inside map

    map<pair<int,int>,int>mpp;
    //pair inside map

    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    mpp[2,3]=10;

    //map be like {{1,2},{2,4},{3,1}}
 

 //iterating in the map
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];//return the value at key 1 which is 2
    cout<<mpp[5];//return zero or null

    auto it=mpp.find(3);
    cout<<(*it).second;

    auto it=mpp.find(5);
    //5 is not present so here find returns end iterator

    //this is the syntax 
    auto it=mpp.lower_bound(2);

    auto it=mpp.upper_bound(3);

    //erase,swap,size,empty,are same as follows


}
void explainMultiMap(){
    //eveything same as map, only it can store multiple keys
    //only mpp[key] cannot be used here

}
void explainUnorderedMap(){
    //same as set and unordered_set difference
}

bool comp(pair<int,int>p1,pair<int,int>p2){
    //self writen comparator--------------------
    //iss function ke arguement ussi type ke lene hai ,jiss
    //type ka apna data hai


    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //otherwise they are same

    if(p1.first>p2.first) return true;
    return false;
} 
void explainExtra(){
    vector<int>v;
    vector<int>a={1,2,3,5,4};
    int n=a.size();
    // sort(a,a+n);
    // sort(v.begin(),v.end());

    // sort(a+2,a+4);

    // sort(a,a+n,greater<int>); sorting in descending order
    //greater<int> is a comparator


//SORTING IN MY WAY----------------------------

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    //sort it according to second element
    //if second element is same , then sort
    //it according to first element but in descending

    // sort(a,a+n,comp);
    //{4,1},{2,1},{1,2}
    //this comp is a self written comparator which is a boolean function

    int num=7;
    int cnt=__builtin_popcount(num); //it returns ki kitne 1 honge binary form me
    //which is number of set bits

    long long num=165786578687;
    int cnt=__builtin_popcountll(num);


    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    //next_permutation dictioanry order me nikaalega saare
    //permutations,agar sorted rehti hai hamari string to
    //agar string 231 aise hoti , to isi ke baad se permutate hota


    int maxi=*max_element(v.begin(),v.end());//returns maximum
    int mini=*min_element(v.begin(),v.end()); //return minimum


    
}

int main(){
    explainPair();
    return 0;
}