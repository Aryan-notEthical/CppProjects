
#include <iostream>
#include <cmath>
using namespace std;

int main()

{   

    int Input;
    string END;
    int z;
    cout << "Enter a number to find it's squre root" <<endl;
    cin >> Input;

    z = sqrt(Input);
    cout << "The Squre root of "<< Input <<" is " <<z <<endl;
     
    cin.ignore();
    
    cin.get();
    

}