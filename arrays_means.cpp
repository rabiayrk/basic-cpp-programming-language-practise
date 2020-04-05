#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Arrays - Samples" << endl;
    
    //arithmetic mean    
    int a[8] ={3,5,21,12,6,4,13,1};
    int sum1=0;
    for (int i=0; i<8;i++) 
        {
            sum1 = sum1 + a[i];      
        }
    cout << "Arithmetic mean: " << (float) sum1/8 << endl; 
    
    
    //geometric mean    
    int b[8] ={3,5,21,12,6,4,13,1};
    int multiplication=1;
    
    for (int i=0;i<8;i++) {
        multiplication *= b[i]; 
        }
        cout << "Geometric mean: " << pow(multiplication,(float) 1/8) << endl;
      
        
    //mean of odd numbers in the array
     int c[8] ={3,5,21,12,6,4,13,1};
     int sum2=0;
     int oddNumbers=0; 
      for (int i=0;i<8;i++) {
          if(c[i]%2==1) {
              sum2 += c[i];
              oddNumbers++;
              }
      }
    cout << "Mean of odd numbers in the array: " << (float)sum2/oddNumbers << endl; 
 
    
    //mean of LCM(least common multiple) - HCF(highest common factor)
    int d[8] ={3,5,21,12,6,2,13,1};
    
    int hcf= a[0]; 
    int lcm = a[0];
    
    for (int i=0; i<8; i++) {
        
        if(d[i]%2==0) { 
            
            if(hcf< d[i]) { //to find bigger number
                
                hcf= d[i];
                }
            if (lcm> d[i]) {
                
                lcm= d[i];
                }
        }
        
        }
        cout << "Mean of hcf and lcm numbers: " << (float)(hcf+lcm)/2 << endl;
}

