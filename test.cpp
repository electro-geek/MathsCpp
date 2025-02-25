#include<iostream>
#include "Taylor.hpp"

using namespace std;

int main(){
    int x,n;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    NewMaths obj;
    float solution = obj.exp(x,n);
    cout<<"The solution is: "<<solution<<endl;
    return 0;
}