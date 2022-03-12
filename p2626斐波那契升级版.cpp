#include<iostream>
using namespace std;
int fib[50]={1,1};
bool isPrime(int n)
{
    if(n==1)return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return false;
    return true;
}
void fibonacci()
{
    for(int i=2;i<=49;i++)
        fib[i]=fib[i-1]+fib[i-2];
}
void discompose(int num)
{
    cout<<num<<"=";
    while(1)
    {
        if(isPrime(num))
        {cout<<num;break;}
        else
        {
            for(int i=2;i<=num;i++)
                if(isPrime(i)&&num%i==0)
            {
                cout<<i<<"*";
                num/=i;
                break;
            }
        }
    }
}
int main()
{
    fibonacci();
    int n;
    cin>>n;
    discompose(fib[n-1]);
    return 0;
}
