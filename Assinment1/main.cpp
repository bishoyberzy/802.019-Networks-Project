#include "Header.h"
using namespace std;

int main()
{
    cout << "Please Enter the Generator:" << endl;
    string generator;
    getline(cin,generator);
    cout << "please Enter Data to be Transmitted" << endl;
    string data;
    getline(cin,data);
    string transmitted_message = Generator(data,generator);
    string command;
    getline(cin,command);
    int token1=command.find("<");
    int token2=command.find("|");
    int token3=command.find("|",token2 + 1);

    string filename = command.substr(token1+1, token2 - token1-1);
    ofstream myfile (filename.c_str());
    myfile << "Transmitted Message:"<<endl<<transmitted_message <<endl;

    int alteri = command.find("alter",0);
    if (alteri==-1)
    myfile << "verifier output:"<<endl<<verfier(transmitted_message, generator)<<endl;
    else
    {
        alteri+=5;
        string alter_arg = command.substr(alteri, command.find("|",alteri)-alteri);
        int index = atoi(alter_arg.c_str());
        string altered_message = alter(transmitted_message,index-1);
        myfile<< "altered message:\n" << altered_message<<endl;
        myfile << "verifier output:\n" << verfier(altered_message, generator);
    }

    return 0;
}
