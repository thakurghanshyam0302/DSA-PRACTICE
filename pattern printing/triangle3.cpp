#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i =0; i<n; i++){ //n times run
        for(int j =0; j< i+1; j++){ //i+1 times run
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}