#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Palindrome" << endl;
    cout << "Please enter a word : " << endl;
    
    char c[100];
    cin >> c;
    
    char *p,*q;
    p=c; //pointer start from index 0 in array
    q=c; //pointer start from end of the array
     
while(*q!='\0') { // \0 : end of string
        q++;
        }
    q--; // if it is end of string, go one back step
    
    bool palindrome=true; //when starting, we define all the words as palindrome
    
    while (q>p) {
        
        if(*p!=*q) { 
        palindrome=false; //if one letter is different, it return false
        }
        p++;
        q--;
        }

    if (palindrome) 
        cout << "This word is palindrome" << endl;
    else 
        cout << "This word is not palindrome" << endl;
}
