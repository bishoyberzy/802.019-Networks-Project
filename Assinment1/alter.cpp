#include "Header.h"

string alter(string generatoroutput, int index){
string message = generatoroutput;
//string polynomial = generatoroutput.substr(generatoroutput.find("\n",0)+1, -1);
message[index] = (message[index]=='1')? '0': '1';
return (message); //+ "\n" + polynomial);
}
