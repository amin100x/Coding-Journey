#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;    // create stream

    fout.open("amin.txt");  // load file from RAM

    fout<<"sdgdfbd";  //Writting data into file

    fout.close();    //Close the file
}