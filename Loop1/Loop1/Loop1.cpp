#include <iostream>
using namespace std;
int main()
{
    //First version
   int liczby1[5];
   for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            liczby1[i] = j;
        cout << liczby1[i] << "\n";
    }
    return 0;
}