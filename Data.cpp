#include <iostream>
#include<vector>
#include <string>
#include <sstream>
#include <fstream>
#include "Data.h"
using namespace std;
using std::vector;






void Data::readData1(char *input, vector<vector<double> > &mat1 ){

double m;
 vector<double> temp;

 ifstream myfile;
 myfile.open("mat1.txt");

  if (myfile.is_open())
  {
    while ( myfile>>m )
    { temp.push_back(m);
       if(myfile.peek()=='\n'){

 mat1.push_back(temp);

    temp.clear();

        }

       }

    myfile.close();
}
else cout << "Unable to open file";

}



void Data::readData2(char *input, vector<vector<double> > &mat2 ){

double m;
 vector<double> temp;

 ifstream myfile;
 myfile.open("mat2.txt");

  if (myfile.is_open())
  {
    while ( myfile>>m )
    { temp.push_back(m);
       if(myfile.peek()=='\n'){

 mat2.push_back(temp);

    temp.clear();

        }

       }

    myfile.close();
}
else cout << "Unable to open file";

}



void Data::mutiplication(vector<vector<double> > &mat1,vector<vector<double> > &mat2){

 std::vector<double> output;




for(int i=0;i<mat1.size();i++){


    for(int j=0;j<mat1[i].size();j++){


    cout<<i<<j<<"\t"<<mat1[i][j]+mat2[i][j]<<"\n";


}

cout<<endl;


  }
}
