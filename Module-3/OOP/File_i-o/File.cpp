#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    int t = 50;
    // Ofstream is use to print the data in the file
    ofstream out;
    // Using open() you can open the file
    out.open("output.txt");

    // Writing the string in to the file
    out<< "Hello";
    out<<t <<" " << y;
    // close() is use to close the file
    out.close();
    
    // Ifstream class is use to read from the file  
    // in object
    ifstream in("output.txt");
    string str;
    // Reading the string from the file

    in>>str;
    cout<<str;
    return 0;
}