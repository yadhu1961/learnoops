#include <iostream>

/*
    This program was written to test whether the compiler
    supports ANCI-C++ of not. Example taken from cplusplus.com
*/

using namespace std;

//template function
template <class T>
bool ansisupported (T x)
{ 
    return true;
}

int main() 
{
    if(ansisupported(0))
        cout << "ANSI OK"<<endl;
    
    
    return 0;
}
