#include <iostream>
#include <stdlib.h>
using namespace std;


int func (int *p) {
        *p=10;
}

int main()
{
    cout << "Dynamic Memory Method - MALLOC" << endl;
    
    int *p = (int*)malloc(sizeof(int)*3);
    p[2]=3;
    cout << p[2] << endl;
    
    int *q= (int*)malloc(sizeof(int)*3);
    *q= 50;
    func(q);
    
    cout << *q << endl;
    
}
