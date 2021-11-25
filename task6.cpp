#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;
int main() 
{
    int num=1234;
    cout<<"This is the first line."<<endl;           
    cout<<setw(15)<<setfill('*')<<num;  
}

