#include <iostream>
using namespace std;

int main()
{
    cout << "Arrays - Subarrays" << endl;
    
    int a[3]= {1,2,3};
    int b[10]= {6,7,1,2,3,8,9,4,11,30};
    
    int aSize=3;
    int bSize=10;
    
    for(int i=0; i<bSize; i++) {
        bool equal=true;
        for (int j=0; j<aSize; j++) {
            if (a[j] != b[i+j]) { 

                equal=false; 
                break; 
                
                }
            }
    if(equal) {
        cout << "It is subarray and it starts from " << i << endl;
        }
        }
        }
        
