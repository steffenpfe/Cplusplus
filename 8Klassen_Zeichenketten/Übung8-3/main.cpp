// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("example.cpp");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        if(line.find("//", 0) <= line.length()) //Sucht ob // innerhalb der line vorhanden ist
            cout << line.substr(line.find("//",0)) << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file" << endl;

  return 0;
}
