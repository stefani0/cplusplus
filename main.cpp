#include <iostream>
#include<vector>
#include <string>
#include <sstream>
#include <fstream>
#include "Data.h"


using namespace std;
using std::vector;


int main(int argc, char const *argv[])
{

 cout << "\033[1;31m Hello Anonymous ahahha !\033[0m\n" << endl;


Data obj;

// lexo file

obj.readData((char*)argv[1]);
obj.outputData();

    return 0;
}
