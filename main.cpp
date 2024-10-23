#include <iostream>
using namespace std;

int add(int a, int b);
int multiply(int a, int b);

int main()
{
    cout<<"Hello world\n";
    cout<<"5 + 7 = "<<add(5,7)<<endl;
    cout<<"5 * 7 = "<<multiply(5,7)<<endl;
    cout<<"My name is Tom\n";
    return 0;
}

int multiply(int a, int b)
{
    return a*b;
}

int add(int a, int b)
{
    return a+b;
}