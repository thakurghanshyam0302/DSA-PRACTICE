#include<iostream>
using namespace std;
int sum(int a){
    int result=0;
while(a>0){
    result = result +a%10;
a= a/10;
}
    return result;
}
int main(){
    int x,y;
    cout<<"enter digists : ";
    cin>>x;
int result = sum(x);
cout<<"sum of digit "<<x<<" is : "<<result;
    return 0;
}