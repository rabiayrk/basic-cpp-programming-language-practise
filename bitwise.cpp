#include <iostream>
using namespace std;

int main()
{
    cout << "Bitwise" << endl;
    
    //left
    cout << "Left : " << endl;
    int r = 19;
    cout << r << endl;
    
    int b = r << 2;
    cout << b << endl;
    
    //right
    cout << "Right : " << endl;
    int g = 18;
    cout << g << endl;
    
    int u = g >> 2;
    cout << u << endl;
    
    //and (&)
    cout << "And : " << endl;
    int k = 22 & 13 ;
    
    cout << k << endl;
    
    //or (|)
    cout << "Or : " << endl;
    int a = 12 | 6;
    
    cout << a << endl;
    
    //exor (^)
    cout << "Exor : " << endl;
    int m = 5 ^ 28;
    
    cout << m << endl;
    
    return 0;
}
