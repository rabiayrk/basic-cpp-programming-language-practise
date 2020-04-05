#include <iostream>
using namespace std;

int main()
{
    cout << "Arrays - Samples" << endl;
    
    //find the biggest three number in array
    
    int a[7] ={4,5,8,18,41,3,6}; //store the numbers
    
    int eb1= a[0]; 
    int eb2= a[0];
    int eb3= a[0];
    
    for (int i=1; i<6;i++) 
        {
        if (eb1< a[i]) //if one of other number, bigger than eb1, replace it.
        {
        eb3=eb2;
        eb2=eb1;
        eb1= a[i];
        }
        else if (eb2< a[i]) //if one of other number, bigger than eb2, replace it.
        {
        eb3=eb2;
        eb2=a[i]; 
        }
        else if (eb3< a[i])  //if one of other number, bigger than eb3, replace it.
        {
        eb3=a[i]; 
        }
        }
        cout << "Biggest numbers: " << eb1 << ", " << eb2 << ", " << eb3 << endl;
        
        cout << "Sum of biggest numbers: " << eb1+eb2+eb3 << endl;
        }
