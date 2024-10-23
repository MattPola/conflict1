#include <iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);

int main()
{
    cout<<"Hello world\n";
    cout<<"My name is Tom\n";
    cout<<"5 + 7 = "<<add(5,7)<<endl;
    cout<<"5 - 7 = "<<subtract(5,7)<<endl;
    return 0;
}

int subtract(int a, int b)
{
    return a-b;
}

int add(int a, int b)
{
    return a+b;
}