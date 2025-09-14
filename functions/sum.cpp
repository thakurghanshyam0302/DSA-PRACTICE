#include<iostream>
using namespace std;
int sum(int a, int b){
    int result = a+b;
    return result;
}
int main(){
    int x,y;
    cout<<"enter 1st no : ";
    cin>>x;
    cout<<"enter 1st no : ";
    cin>>y;
int result = sum(x,y);
cout<<"sum = "<<result;
    return 0;
}