#include<iostream>
using namespace std;
int factorial(int a){
    int fact =1;
    for(int i=1; i<=a; i++){
        fact= fact*i;
    }
    return fact;
}
int main(){
    int x;
    cout<<"enter no : ";
    cin>>x;
    if(x<0){
        cout<<"factorial is not define for negative numbers";
    }
    else if(x<=0 || x==1){
        cout<<"factorial = 1";

    }else{
int result = factorial(x);
cout<<"factorial = "<<result;
    }
    return 0;
}