#include <iostream>
#include <ctime>
#include <stdlib.h> 

using namespace std;
int main()
{
    cout << "Recursive Functions - Random Number" << endl;
    
    int rnd; //random = rnd
    srand (time(NULL));
    rnd = rand() %6 +1;
    cout << rnd << endl;

    rnd = rand() %2; 
    cout << rnd << endl;

    rnd=rand() %100;
    cout << rnd << endl;
}
