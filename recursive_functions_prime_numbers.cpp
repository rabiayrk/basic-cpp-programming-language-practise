#include <iostream>
using namespace std;
    
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
    
int main()
{
    cout << "Recursive functions - Prime Numbers" << endl;
    int c = 0; 
    for (int i=2; c<20; i++) { //twenty times
        if (primeOrNot(i)) {
            cout << i << endl;
            c++;
            }
        }
}
