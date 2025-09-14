#include<iostream>
using namespace std;
long long decimal(long long a){
    long long result=0; 
    int power=1;
    while(a>0){
        int rem = a%10;
        a= a/10;
        result = result+ rem*power;
        power= power *2;
    }
    return result;
}
int main(){
    long long binary;
    cout<<"enter binary numbre : ";
    cin>>binary;
    long long result = decimal(binary);
    cout<<"binary to decimal Conversion of "<<binary<<" is "<<result;

return 0;}