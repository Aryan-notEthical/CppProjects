#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    time_t tt;
    struct tm* ti;
    time(&tt);                                  //VERSION 2023.20.5
    ti = localtime(&tt);                        //DEVELOPED BY ARYAN
    system("color a");
    string input2;
    string input1;
    ofstream present("Present.txt",_S_app);
    ofstream absent("Absent.txt",_S_app);
    int a  = 0;
    
    while (a < 9)
    {
        cout << "Enter the name" << endl;
        cin >> input2;
        cout << "Present or absent" << endl;
        cin >> input1;
        if (input1 == "Present")
        {
            present << "Current Day, Date and Time is = " << asctime(ti);
            present << input2 << " - "  << input1 << endl;
            present <<""<<endl;
            
        }
        else if(input1 == "Absent")
        {
            absent << "Current Day, Date and Time is = " << asctime(ti);
            absent << input2 << " - " << input1 << endl;
            absent <<""<<endl;
            
        }
        
    }
}
