#include <iostream>
#include <string>
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
    cout << "Transmitted Message:\n" + transmitted_message <<endl;
    cout << "verfier output" << verfier(transmitted_message, generator);

    return 0;
}
