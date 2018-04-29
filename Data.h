#ifndef DATA_H
#define DATA_H


class Data
{

    private:

        std::vector<std::vector<double> >mat1;
          std::vector<std::vector<double> >mat2;

    public:

        void readData1(char *input,std::vector<std::vector<double> > &mat1);
        void readData2(char *input,std::vector<std::vector<double> > &mat2);


         void mutiplication(std::vector<std::vector<double> > &mat1, std::vector<std::vector<double> >&mat2);



};

#endif // DATA_H
