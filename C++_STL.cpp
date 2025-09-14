#include <bits/stdc++.h>
using namespace std;


void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //faster than push_back but works same as push_back

    
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    
    vector<int> v1(5,100); // 5 elements with value 100

    vector<int> v2(5); // 5 elements with value 0

    vector<int> v3(v1); // copy v1 to v3

    //vector<int> v2(8); // 8 elements with value 0
    v2.push_back(1); // 9 elements with last element 1  


    cout<<v[0]<<" "<<v.at(1)<<endl; // both works same but at() is safe as
    
    vector<int> :: iterator it = v.begin(); // points to first element
    cout<<*(it)<<" "; // 1
    it++; // points to next element
    cout<<*(it)<<" "; //2
    it += 2; // points to 2nd next element
    cout<<*(it)<<" "; // garbage value as it points to 4th element


    vector<int> :: iterator it1 = v.end(); // points to next element of last element
    //vector<int> :: iterator it2 = v.rend(); // points to next element of first element from reverse
    //vector<int> :: iterator it3 = v.rbegin(); // points to last element

    //cout<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" "; // last element

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it)<<" ";
    }
    cout<<endl;

    for(auto it : v){ // for each loop
        cout<<it<<" "; // it is element here
    }
    
    // {10,20,12,23,35}
    v.erase(v.begin()+1); // 20 will be erased

    v.erase(v.begin() + 2, v.begin() + 4);   // <= {10, 20, 35} (start, end) // 12,23 will be erased

    // insert function 
    vector<int> v4(2,100); // {100, 100}
    v4.insert(v4.begin(), 300); // {300, 100, 100}
    v4.insert(v4.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    
    vector<int> copy(2,50); // {50, 50}
    v4.insert(v4.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}


    cout<<v4.size()<<endl; // size of vector

    v.pop_back(); // last element will be removed

    v1.swap(v2); // v1 and v2 will be swapped
    v.clear(); // clears the vector
    cout<<v.empty(); // 1 if vector is empty else 0




}

void explainList(){
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(6); // {6, 5, 2, 4}
    ls.emplace_front(); // faster than push_front but works same as push_front {2, 4}

}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    cout<<dq.back()<<endl; // 1
    cout<<dq.front()<<endl; // 4


}
void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {1, 2}
    st.push(3); // {1, 2, 3}

    cout<<st.top()<<endl; // 3
    st.pop(); // {1, 2}
    cout<<st.top()<<endl; // 2

    cout<<st.size()<<endl; // 2
    cout<<st.empty()<<endl; // 0

    stack<int> st2;
    st2.push(4); // {4}
    st.swap(st2); // swaps st and st2
}

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}

    cout<<q.front()<<endl; // 1
    q.pop(); // {2, 3}
    cout<<q.front()<<endl; // 2

    cout<<q.size()<<endl; // 2
    cout<<q.empty()<<endl; // 0

    queue<int> q2;
    q2.push(4); // {4}
    q.swap(q2); // swaps q and q2
}

void explainPadiQueue(){  //  (sorted queue  )
    priority_queue<int> pq; // max heap
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.push(1); // {8, 5, 2, 1}

    cout<<pq.top()<<endl; // 8
    pq.pop(); // {5, 2, 1}
    cout<<pq.top()<<endl; // 5

    cout<<pq.size()<<endl; // 3
    cout<<pq.empty()<<endl; // 0

    priority_queue<int, vector<int>, greater<int>> minheap; // min heap
    minheap.push(5); // {5}
    minheap.push(2); // {2, 5}
    minheap.push(8); // {2, 5, 8}
    minheap.push(1); // {1, 2, 5, 8}

    cout<<minheap.top()<<endl; // 1
    minheap.pop(); // {2, 5, 8}
    cout<<minheap.top()<<endl; // 2

    cout<<minheap.size()<<endl; // 3
    cout<<minheap.empty()<<endl; // 0
}


// store only unique elements , don't allow duplicates
// elements are in sorted order
void explainSet(){   // implemented using balanced BST
    set<int> s; // sorted and unique elements
    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.insert(2); // {1, 2}
    s.insert(4); // {1, 2, 4}
    s.emplace(3); // {1, 2, 3, 4}

    for(auto it : s){
        cout<<it<<" "; // 1 2 3 4
    }
    cout<<endl;

    auto it = s.find(3); // returns iterator to the element if found else returns s.end()
    if(it != s.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    s.erase(2); // {1, 3, 4} // removes 2
    for(auto it : s){
        cout<<it<<" "; // 1 3 4
    }
    cout<<endl;

    cout<<s.count(3)<<endl; // 1 (present) or 0 (not present)

    auto it1 = s.lower_bound(3); // >= 3
    auto it2 = s.upper_bound(3); // > 3

    cout<<*(it1)<<" "<<*(it2)<<endl; // 3 4

    set<int> :: iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++){
        cout<<*(itr)<<" "; // 1 3 4
    }
    cout<<endl;
}

void explainMultiSet(){   // implemented using balanced BST
    multiset<int> ms; // sorted and non-unique elements
    ms.insert(1); // {1}
    ms.insert(2); // {1, 2}
    ms.insert(2); // {1, 2, 2}
    ms.insert(4); // {1, 2, 2, 4}
    ms.emplace(3); // {1, 2, 2, 3, 4}

    for(auto it : ms){
        cout<<it<<" "; // 1 2 2 3 4
    }
    cout<<endl;

    auto it = ms.find(3); // returns iterator to the element if found else returns ms.end()
    if(it != ms.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    ms.erase(2); // removes all occurrences of 2 // {1, 3, 4}
    for(auto it : ms){
        cout<<it<<" "; // 1 3 4
    }
    cout<<endl;

    cout<<ms.count(3)<<endl; // 1 (present) or 0 (not present)

    auto it1 = ms.lower_bound(3); // >= 3
    auto it2 = ms.upper_bound(3); // > 3

    cout<<*(it1)<<" "<<*(it2)<<endl; // 3 4

    multiset<int> :: iterator itr;
    for(itr = ms.begin(); itr != ms.end(); itr++){
        cout<<*(itr)<<" "; // 1 3 4
    }
    cout<<endl;
}

void explainUSet(){   // implemented using hash table
    unordered_set<int> s; // unsorted and unique elements
    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.insert(2); // {1, 2}
    s.insert(4); // {1, 2, 4}
    s.emplace(3); // {1, 2, 3, 4}

    for(auto it : s){
        cout<<it<<" "; // 1 2 3 4 (order may vary)
    }
    cout<<endl;

    auto it = s.find(3); // returns iterator to the element if found else returns s.end()
    if(it != s.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    s.erase(2); // {1, 3, 4} // removes 2
    for(auto it : s){
        cout<<it<<" "; // 1 3 4 (order may vary)
    }
    cout<<endl;

    cout<<s.count(3)<<endl; // 1 (present) or 0 (not present)

    set<int> :: iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++){
        cout<<*(itr)<<" "; // 1 3 4 (order may vary)
    }
    cout<<endl;
}

void explainMap(){   // implemented using balanced BST
    // key-value pairs , keys are unique and sorted
    map<int, string> m;
    m[1] = "abc"; // {1: "abc"}
    m.emplace(2, "bcd"); // {1: "abc", 2: "bcd"}
    m[3] = "efg"; // {1: "abc", 2: "bcd", 3: "efg"}
    m[1] = "xyz"; // {1: "xyz", 2: "bcd", 3: "efg"} (overwrites the value for key 1)

    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<m.size()<<endl; // 3
    cout<<m.count(3)<<endl; // 1 (present) or 0 (not present)

    auto it2 = m.find(3); // returns iterator to the element if found else returns m.end()
    if(it2 != m.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    m.erase(2); // removes key 2
    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    auto it3 = m.lower_bound(3); // >= 3
    auto it4 = m.upper_bound(3); // > 3

    cout<<it3->first<<" "<<it4->first<<endl; // 3 (it4 will be end iterator)

}
void explainMultimap(){
    // everything same as map but keys can be duplicate
    // only app[key] cannot be used here
}
void explainUnorderedMap(){
    // same as set and unordered_set difference is that it stores key-value pairs
}

void explainExptra(){
    // bitset
    // stack using 2 queues
    // queue using 2 stacks
    // deque using 2 stacks
    // linked list
    // vector using 2 stacks
    // vector using 2 queues
    // array
    // string
    // stringstream
    // algorithms (sort, reverse, max, min, accumulate, count, find, binary_search, lower_bound, upper_bound, next_permutation, prev_permutation)

int main(){
    explainvector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPadiQueue();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultimap();
    explainUnorderedMap();
    explainExptra();
    
    return 0;
}
