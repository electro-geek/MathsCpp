#ifndef TAYLOR  // Include guard to prevent multiple inclusions
#define TAYLOR
#include<iostream>

using namespace std;

class NewMaths{
    public:
        int factorial(int n){
            if(n==0 || n==1){
                return 1;
            }
            return n*factorial(n-1);
        }
        int power(int x, int n){
            if(n==0){
                return 1;
            }
            return x*power(x, n-1);
        }
        float exp(int x, int n){
            if (n==0){
                return 0;
            }
            //recursive solution
            return (power(x,n)/(float)factorial(n))+exp(x, n-1); 
        }
};







#endif // MYCLASS_H
