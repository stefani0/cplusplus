#include <iostream>
#include<vector>
#include <string>
#include <sstream>
#include <fstream>
#include "Data.h"
using namespace std;
using std::vector;

 std::vector<std::vector <double> > matrice(0, vector<double>(0,0)) ;
   std::vector<std::vector <double> > matrice1(0, vector<double>(0,0)) ;
   std::vector<double> output;


Data::Data()
{
    //ctor
}

void Data::readData(char *input){

double m;
 vector<double> temp;

 ifstream myfile;
 myfile.open("pesha.txt");

  if (myfile.is_open())
  {
    while ( myfile>>m )
    { temp.push_back(m);
       if(myfile.peek()=='\n'){

 matrice.push_back(temp);
 matrice1.push_back(temp);
    temp.clear();

        }

       }

    myfile.close();
}
else cout << "Unable to open file";

}


void Data::outputData(void){

double sum = 0;
ofstream outfile;
outfile.open("train.txt");
cout<<endl;

cout<<"mtrice size tjeter   "<<matrice1.size()<<endl;


for(int i=0;i<matrice1.size();i++){



    for(int j=0;j<matrice1[i].size();j++){

      sum+=matrice1[i][j];
      output.push_back(sum);




 cout<<matrice1[i][j]<<"\t";
 outfile<<matrice1[i][j]<<"\t";
}

outfile<<"out: "<<sum;
cout<<endl;
outfile<<endl;
sum=0;

  }

}
