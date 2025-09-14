#include<iostream>
using namespace std;
int main(){
    int n;
    int num=1;
    cout<<"enter number : ";
    cin>>n;
    for(int i =0; i<n; i++){ //n times run
        //char ch = 'A';
        for(int j =0; j< i+1; j++){ //i+1 times run
            cout<< num<<" ";
            num+=1;
        }cout<<endl;
       // num+=1;
    }
    return 0;
}
