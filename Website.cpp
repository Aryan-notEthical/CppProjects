#include<iostream>
using namespace std;

int main(){
    while (true)
    {
        string input;
        cout <<"-------------------------------------------------------"<<endl;
        cout <<"Hello user which website do want to go"<<endl;
        cout <<"Youtube"<<endl;
        cout <<"Discord"<<endl;
        cin >> input;
        if (input == "Youtube")
        {
            system("start www.youtube.com");
        }
        else if(input == "Discord"){
            system("start www.discord.com");
        }
        

    }
    
}