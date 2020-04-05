#include <iostream>
#include <math.h>
using namespace std;

//Mersenne Numbers
int func (int base, int ex) // ex = exponential
    {
        int result =1;
        for (int i=1; i<=ex; i++) 
    {
       result = result * base ; // b^ex = b*b*b*b... (ex times)
    }
    return result; 
    }

//Prime Numbers
bool primeOrNot (int x){
    
	for (int i=2; i<x; i++) 
    {
	    if (x%i==0) 
	        {
	        return false;
	        }    
    }
    return true; 
}

// n. prime numbers
int prime(int x) {
	int c=0;
	double i;
	 
	for(i=2; c<x;i++) {
		if (primeOrNot(i)){
		 	
		c++;
		 
		}
	}
	return i-1; //because of i++, if we define as i, it will show us one more
 }
 
 
int main()
{
    cout << "Arrays - Prime Numbers" << endl;
    
    int c=0; //control variables
    for (double i=2;  c<20; i++) {
        if (primeOrNot(func(2,i)-1)) {            
            cout << func(2,i)-1 << endl;
            c++;
            }
        }
	cout << "SECOND SAMPLE" << endl;
	cout << prime(5) << endl;
	
    return 0;
}

 
