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
  vector< vector<double> > mat1;
  vector< vector<double> > mat2;
// lexo file

obj.readData1((char*)argv[1],mat1);
obj.readData2((char*)argv[1],mat2);

obj.mutiplication (mat1,mat2);

    return 0;
}
