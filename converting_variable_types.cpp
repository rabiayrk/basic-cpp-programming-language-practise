#include <iostream>
using namespace std;

int main()
{
    cout << "Converting types \n" << endl;
    
    int a = 70;
    
    cout << "a (int) : " << a << endl;
	
	
    cout << "a : after convert to char : " << (char)a << "\n" << endl;
    
    char h = 'k' ;
    
    cout << "h (char) : " << h << endl;
    
    cout << "h : after convert to int : " << (int)h << "\n" << endl;
    
    float k = 12.15;
    
    cout << "k (float) : " << k << endl;
    
    cout << "k : after convert to int : " << (int)k << "\n" << endl;
    
    return 0;
}
