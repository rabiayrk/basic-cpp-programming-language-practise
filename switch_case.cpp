#include <iostream>
using namespace std;
int main()
{
    cout << "Switch - Case" << endl;
    int p = 10;
	cout << "p = " << p << endl;
     
    switch (p) {
	         
        case 5 : cout << "p equal to 5" << endl;
        case 10 : cout << "p equal to 10 \n\n"<< endl;
     
	cout << "Second Example : \n" << endl; 
    int d;
    cout << "Please enter a number : "<< endl;
    cin >> d;
    
    switch (d) {
        
        case 5: {
            cout << "number equal to 5" << endl;
            }
            break;
        case 10: {
            cout << "number equal to 10" << endl;
            }
            break;
        case 15: {
            cout  << "number equal to 15" << endl;
            }
            break;
            default: {
                cout << "number is not equal to 5, 10 and 15" << endl;
                }     
        }
        
        return 0;
}
}
