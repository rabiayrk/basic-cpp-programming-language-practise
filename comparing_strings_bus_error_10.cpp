#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Comparing Strings - Bus Error 10" << endl;
    
    char *b= "programming";
    cout << b << endl;
    
    char a[13]= "first string";
    cout << a << endl;
    
    /*
	If we define also c as shown as below:
	
	c[14]= "second string";
	
	And if we run something like this:
	
	strcpy(a,b);
	
	we will get this error : "Bus error : 10"
	
	Because --> 
	
	strlen(a) < strlen(c) --> we can not modify string literals.
		
	*/
    
    if(strcmp(b,a)==0) { //string compare
        cout << "equal" << endl;
    }
    else{
        cout << "not equal" << endl;
    }
    
	//b=a; //shallow copy
    //b[2]='x';
    //cout << a << endl;
}
