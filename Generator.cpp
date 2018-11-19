#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

string Generator (string data, string generator)
{
    string remainder = binarydiv(generator, data);
    string message = data + remainder;
    return message;
}
