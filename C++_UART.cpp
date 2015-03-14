#include <fstream>
#include <iostream>
using namespace std;
using std::ofstream;

int main()
{
    float x;
    int y = 0;
    float z = 5;
    //cout << "Establishing Connection" << std::endl;
    fstream serial ("/dev/ttyACM0");
    //ofstream file ("Ash.txt",ios::out);
    //std::cout << "Sending integer" << std::endl;
    //file << 5 << std::endl; // endl does flush, which may be important
    //std::cout << "Data Sent" << std::endl;
    //cout << "Connection Done" << std::endl;
   while (1){

      double response;
      serial >> response;
    //file << x << endl ;
    //cout << x << endl ;
        }
    return 0;
}


