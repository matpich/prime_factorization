#include <iostream>

using namespace std;

void prime_fact(int x);

int number;

int main()
{
    cout<<"\"Prime Factorization\" is finding which prime numbers \nmultiply together to make the original number."<<endl<<endl;
    cout<<"Choose number: ";
    cin>>number;
    cout<<endl;
    prime_fact(number);
    return 0;
}

void prime_fact(int x)
{
    int i = 2;

    while(true)
    {
        if(x==1){break;}
        else if(x%i==0)
        {
            cout<<i<<endl;
            x/=i;
        }
        else{i++;}
    }
}
