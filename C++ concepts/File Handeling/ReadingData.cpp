#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;  //creating input stream
    char ch;    //variable for storing GET pointer charecter

    fin.open("amin.txt");  //load file in RAM
    fin >> ch;  //storing 1st GET pointer value in ch variable

    while (!fin.eof())  //iterate till end of file
    {
        cout<< ch; //print the value at first index(1st charecter)
        fin>>ch;  //move the GET pointer forward
    }
    fin.close();
    
}