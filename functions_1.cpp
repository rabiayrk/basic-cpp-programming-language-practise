#include <iostream>
using namespace std;

    
int func1 (int x){
	
        cout << x << endl; 
        return 5; 
    }

void func2 (int x){
	
    cout << x + 5 << endl; 
    }
    
int main(){
	
   cout << "Functions" << endl;
    
   cout << "\nFunction 1 : \n" << func1(5) << endl; 
   cout << "\nFunction 2 : \n" << func1(16) << endl; 
   func2(10);
}
