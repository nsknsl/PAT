#include<iostream>
using namespace std;

int main()
{
    bool evenOrOdd = false;
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        evenOrOdd = true;
    }
    int count = 0;
    bool go = true;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        }
        else{
            n = (3 * n + 1) / 2;
        }
        count += 1;
    }
    cout<<count;
}


/*
这题非常简单，关键在于不要写得太长


*/