#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    cout << "Variable Type : String" << endl;
    
    string s; 
    char *p= "Programming";
    char c[15]= "Programming";
    s = p;

    cout << s.size() << endl; //length of string
    
    s.append("AnotherString"); //also we can add new string to first string
    cout << s << endl;
    
    cout << s.substr(2,8) << endl; //you can define which characters will be display on the screen
    
 
    return 0;
}
