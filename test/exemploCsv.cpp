#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {

        std::string fileName = "exemplo.csv";



        std::fstream data;
        std::string line;
        std::string cell;

        double x;
        int count =0;

        data.open(fileName.c_str());
        ;

        if ( data.is_open() && data.good() ) {
                std::getline(data, line); // pula a primeira linha


                while ( getline(data, line) ) { //  //  std::getline(data, line); captura a primeira linha

                        cout << line << endl;
                        count =0;

                        std::stringstream lineStream(line);


                        for ( int i = 0; getline(lineStream, cell,','); i++) {
                                if( i > 0) {
                                      //  cout << cell <<endl;
                                        x = std::stod(cell);

                                          cout << "x: " << x << endl;
                                }



                        }



                }
        }
        else
                cout << "file not found" <<endl;


        std::cout << "c " << count <<  '\n';




}
