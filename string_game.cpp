#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
    
    char * f(char *s) {
        int i=0;
        char c=s[i];
        if (c=='\0')
            return s;
        
        bool control=false;
        while(c != '\0') {
            char c1= s[i+1];
        if(c==c1&&i==0) {
            s= &s[i+2];
            control=true;
            }
        
        else if (c==c1) {
            control=true;
            while (s[i]!='\0'){
                s[i]=s[i+2];
                i++;
                }
            s[i]= '\0';
            
        }
        i++;
        c=s[i];
        }
        if(control ==false)
            return s;
        else
            return f(s);
            }
int main()
{
    cout << "String Game" << endl;
    
    cout << "Please enter letter into array: " << endl;
    
    char c[100];
    
    cin >> c;
    cout << f(c) << endl;
}
