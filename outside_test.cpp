#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    string line;
    ofstream outFile("file.txt",ios::app);
    if(outFile.is_open())
    {
        outFile<<"or something else"<<endl;
    }
    ifstream inFile("file.txt");
    outFile.close();
    if(inFile.is_open())
    while(getline(inFile,line))
    {
        cout<<line<<endl;
    }
    inFile.close();
    return 0;
}