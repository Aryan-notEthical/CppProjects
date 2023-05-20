#include <iostream>
#include <thread>

using namespace std;

int main()
{
    string Answer;
    cout << "Do you want to Log off for computer Y or N" << endl;
    cin >> Answer;
    if (Answer == "Y", "y")
    {
        for (int i = 1; i < 11; i++)
        {
            cout << "Loging off IN " << i << endl;
            
        }
         system("c:\\windows\\system32\\shutdown /s");
        
    }
    else if (Answer == "N","n")
    {
        cout << "OK BYE!" <<endl;
    }
    
   
}



