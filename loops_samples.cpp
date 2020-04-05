#include <iostream>
using namespace std;

int main()
{
    cout << "Loops - Samples\n\n" << endl;
    
    // odd numbers - 1 to 100
    
	cout << "First Way \n" << endl;	
    int a=1;
     
    while (a<100){
        
        cout << a << " , " ;
        a += 2; 

	}
    cout << "\n\nSecond Way \n" << endl;
    int b = 1; 
    
    while (b < 100) {
        
       if (b%2==1) { 
           cout << b << "," ;
        }
        b++;
        }
    
    cout << "\n\nThird Way (by using for loop) \n" << endl;
    for (int c=1; c< 100; c++) {
        if (c%2==1) {
                
            cout << c << " , " ;
                
            }
            
        }

    return 0;
}
