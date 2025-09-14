#include<iostream>
using namespace std;
int binary(int a){
    int result=0, power=1;
    while(a>0){
        int rem = a%2;
        a= a/2;
        result = result+rem*power;
        power= power *10;
    }
    return result;
}
int main(){
    int decimal;
    cout<<"enter decimal numbre : ";
    cin>>decimal;
    int result = binary(decimal);
    cout<<"Decimal to Binary Conversion of "<<decimal<<" is "<<result;

return 0;}