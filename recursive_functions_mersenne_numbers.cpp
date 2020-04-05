#include <iostream>

using namespace std;

int func (int base, int ex) // ex = exponential
    {
        int result =1;
        for (int i=1; i<=ex; i++) 
    {
       result = result * base ; // b^ex = b*b*b*b... (ex times)
    }
    return result; 
    }
int main()
{
    cout << "Recursive Functions - Mersenne Numbers" << endl;
    
    for (int i = 1; i<= 20; i++) //first twenty number
    { 
    cout << func(2,i)-1 << endl; // 2^n - 1
    }
}
    
