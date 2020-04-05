#include <iostream>
#include <ctime>
#include <stdlib.h> 

using namespace std;
int main()
{
    cout << "Arrays - Samples" << endl;
    
    //dice game
    
    cout << "Please enter how many dice you will play: " << endl;
    int n;
    cin >> n;
    
    srand(time(NULL));
    int score; 
    int a[n]; 
    int b[n]; //store the play dice value
    for (int i=0; i<n; i++) {
        
        int z1 = rand()%6+1; //first player's values
        int z2 = rand()%6+1; //second player's values
        
        a[i]= z1; //to store each play dice value
        b[i]= z2;
        

        if (z1>z2){
            score++;
            }
        else if (z2>z1) {
            score--;
            }
        }
        
    //to view each play dice value on the screen 
    cout << "First player's values: " << endl;
    for (int i=0; i<n;i++) {
        cout << a[i] << "  " ;
        }
        cout << endl;
        
    cout << "Second player's values: " << endl;
    for (int i=0; i<n;i++) {
        cout << b[i] << "  " ;
        }
        cout << endl;
        
    //to find winner
    if (score>0) {
        cout << "First player won!" << endl;
        }
        else if (score<0){
        cout << "Second player won!" << endl;
            }
    else {
        cout << "Both of equal, game draws." << endl;
        }
}
