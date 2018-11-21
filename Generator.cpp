#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

string Generator (string data, string generator)
{
    int generatordegree = generator.length()-1;
    string datawithzeroes=data;
    for(int i=0; i<generatordegree; i++){
        datawithzeroes+="0";
    }
    string remainder = binarydiv(generator, datawithzeroes);
    string message = data + remainder;
    return message;
}
