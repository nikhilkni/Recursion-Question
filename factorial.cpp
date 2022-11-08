#include <iostream>
using namespace std;

int Factorial(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else return n*Factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factorial of number is "<<Factorial(n)<<endl;
    return 0;
}
