#include<iostream>
#include<cstdlib>

/*
   Using name space method is used to improve the readability of the code
   However only way to avoid name collision is explicit qualification
 */

using namespace std;

bool exchange(int&,int&);

int main(int argc,char *argv[])
{
    cout<<"\n---------------------------------------------------------------"<<endl;
    cout<<"Program illustrates the concept of reference variables in C++\n";

    if(argc < 3)
    {
        cout<<"Usage ./a.out value_one value_two\n";
        return -1;
    }
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout<<"values before exchanging"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl<<endl;
    
    exchange(a,b);
    
    cout<<"values after exchanging"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;

    cout<<"\n---------------------------------------------------------------"<<endl;
    return 0;
}

bool exchange(int &a,int &b)
{
    a^=b^=a^=b;
    return true;
}
