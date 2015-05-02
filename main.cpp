#include <iostream>
//#include <windows.h>
#include <vector>
#include "primeSieve.h"

using namespace std;

int primeMax()
{
    string prime;
    cout<<"Find all primes up to what number?"<<endl;
    cin>>prime;
   if ( binaryCheck(prime)) 
   { 
       "Hey this number is binary!"
       }
       else 
      { 
          "This number is not binary"
        };
    return atoi(prime.c_str());
}


int main()
{
    primeSieve pS(primeMax());
    
  

    
    return 0;
}
