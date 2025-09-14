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
    int x,y;
    cout<<"enter n : ";
    cin>>x;
    cout<<"enter r : ";
    cin>>y;
    if(x<0 || y<0 || x<y){
        cout<<"combinations are not possible for negative numbers";
    }
    else {
int n = factorial(x);
int r = factorial(y);
int n_r = factorial(x-y);
int combi = n/(r*n_r) ;
cout<<"combinations = "<<combi;
    }
    return 0;
}