#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'a';// independent variable form loop
    cout<<"enter how many charachter print";
    cin>>n;
    for(int i = 0; i<n; i++) {char ch = 'A';//dependent on loop
        for(int j = 0; j <n ; j++){
            cout<< ch<<" ";
            ch = ch + 1;
        }cout<<endl;
    } cout<<" after loop end : " <<ch<<endl;
   return 0; 
}