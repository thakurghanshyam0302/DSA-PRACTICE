#include<iostream>
using namespace std;
int sum(int a){
    int result =0;
    for(int i=1; i<=a; i++){
        result+=i;
    }
    return result;
}
int main(){
    int x;
    cout<<"enter numbers to calculate: ";
    cin>>x;
int result = sum(x);
cout<<"sum = "<<result;
    return 0;
}