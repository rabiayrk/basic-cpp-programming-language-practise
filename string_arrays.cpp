#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "String Arrays" << endl;
    
    char *b= "programming";
    cout << "b :" << b << endl;
    cout << "b[2] : " << b[2] << endl; //only second index
    
    char a[10]= "software" ;
    cout << "a :" << a << endl;
    
    char x[5];
    x[0]='y'; 
    x[1]='a';
    x[2]='z';
    cout << "x : " << x << endl;
    
}
