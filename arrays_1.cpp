#include <iostream>
using namespace std;

int main()
{
    cout << "Arrays" << endl;
    
    int a[3]={3,7,2};

    cout << a[1] << endl; 
    //a[0] --> first number, a[1] --> second number ...

    cout << a[0] + a[2] << endl; // sum of first and third number
    
    a[2]=8; //update the number
    cout << a[2] << endl;
    
    
    for (int i=0;i<3;i++) 
        {
        cout << a[i] << endl;
        }
    
}
