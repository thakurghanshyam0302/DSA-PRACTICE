#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,0};// vector initialize
    vec.push_back(8);// puch element
    vec.push_back(9);
    vec.push_back(6);
    vec.pop_back();// pop element
    for(int val: vec){// foreach loop
        cout<<val<<endl;

    }
   
    cout<<"size= "<<vec.size()<<endl;//display size
    cout<<vec.front()<<endl;// show 1st element
    cout<<vec.back()<<endl;// show last element
    cout<<vec.at(1)<<endl;//show value at index 1

    return 0;
}