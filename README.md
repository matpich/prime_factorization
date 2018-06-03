#include <iostream>

using namespace std;

int main()
{
    float *arr, *numbers;
    arr=new float[5];
    numbers = arr;

    for(int i=0; i<5; i++)
    {
        cout<<"Type "<<i+1<<" number: "<<endl;
        cin >>*numbers;
        numbers++;
    }
    return 0;
}
