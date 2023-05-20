#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("color a");
    cout <<"------Made By Aryan------"<<endl;
    float input;
    string input2;
    ofstream Pass("Pass.txt",_S_app);
    ofstream Fail("Fail.txt",_S_app);
    int a  = 0;
    
    while (a < 9)
    {
        cout << "Enter the name" << endl;
        cin >> input2;
        cout << "Enter the marks" << endl;
        cin >> input;

        if (input < 33)
        {
            Fail << input2 << " - " << input << "/100" << endl;
        }
        else
        {
            Pass << input2 << " - " << input << "/100" << endl;
        }
        
        
    }
}
