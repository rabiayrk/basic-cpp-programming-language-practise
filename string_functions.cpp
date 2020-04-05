#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int size (char *s) {
    
    int b=0;
    char c= s[0];
    while(c!='\0') { // \0 : end of string
        
        c=s[++b];
        
        }
    return b;
    }

int main()
{
    cout << "String Functions" << endl;

    char *s="programming"; //immutable
    cout << s << endl;
    
    char c[15]="programming";
    
    cout << "c : " << c << endl;
    cout << "s : " << s << endl;
    cout << "size of c (by using func): " << size(c) << endl;
    cout << "size of s (by using func): " << size(s) << endl;
    
    cout << "size of c (by using strlen): " << strlen(c) << endl; // size of string
    
    char *x = (char *)malloc(sizeof(char)*8); //define the size
    strcpy(x,s); // deep copy
    
    cout << "copy s to x : " << x << endl;
}
