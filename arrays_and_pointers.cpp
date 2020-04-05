#include <iostream>
using namespace std;

int main()
{
    cout << "Arrays & Pointers" << endl;
    
    int z[3]={1,4,8};
    
    int *p;
    p=&z[0]; //or p=z;
    
    cout << "z[2] : " << z[2] << endl;
    
    cout << "p[2] : " << p[2] << endl;
    
    p[1]=6; 
    
    cout << "z[1] : " << z[1] << endl;   
    
}
