#include <iostream>
using namespace std;


int main()
{
    cout << "Arrays - Samples" << endl;
    //sum of array
    
    //by using loops
    cout << "Please enter how many number you will enter: " << endl;
    int c;
    cin >> c;
    
    int sum=0;
    cout << "Please enter numbers: " << endl;
    
    for (int i=0; i < c; i++) {
        
        int g; //numbers to enter
        cin >> g;
        sum += g; 
        }
    cout << "Sum of numbers: " << sum << endl; 
    
    
    
    //by using arrays
     cout << "Please enter how many number you will enter: " << endl;
    
    int n;
    cin >> n;
    int a[n]; //numbers to enter
    
    cout << "Please enter numbers: " << endl;
    
    for (int i=0;i<n;i++) {
        
        cin >> a[i];
    }
    
    int sum2=0;
    for (int i=0;i<n;i++) {
        
        sum2 += a[i]; 
        
        }
     cout << "Sum of numbers: " << sum2 << endl; 
    
    
    return 0;
}
