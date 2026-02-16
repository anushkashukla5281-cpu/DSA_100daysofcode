#include <iostream>
using namespace std;

int main() 
{
    cout << "Numbers between 1 and 100 divisible by both 5 and 7 are:\n";

    for(int i = 1; i <= 100; i++)
    {
        if(i % 5 == 0 && i % 7 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}