#include <iostream>
using namespace std;
int main()
{
    cout << "Break & Continue Commands" << endl;
    
    //break
    
    cout << "Break : " << endl;
    for (int a = 0; a<10; a++) {
        
        if (a==5)
            break;
        
        cout << a << endl;
        
        }
    
    //continue
    cout << "Continue : " << endl;
    for (int b = 0; b<10; b++) {
        
        if (b==5)
            continue;
        
        cout << b << endl;
        
        }
    
    
    return 0;
}
