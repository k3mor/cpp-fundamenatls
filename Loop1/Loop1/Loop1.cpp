#include <iostream>
using namespace std;
int main()
{
    //First version
    constexpr size_t viele = 5;
   int liczby1[viele];
   for (int i = 0; i < viele; i++)
    {
        for (int j=0; j<= i; ++j)
            liczby1[i] = j;
            cout << liczby1[i] << "\n";
    }

   cout << endl << "******************" << endl;
    //Second
   constexpr size_t tab_size = 11;
   int tab[tab_size];
   for (size_t i = 0; i < tab_size; i++)
   {
       tab[i] = i;
   }
   for (size_t i = tab_size-1; i > 0; i--)
   {
       cout << tab[i]<<",";
   }
   cout << endl << "******************" << endl;

   for (int a = 5; a >= 0;--a) {
       cout << a << ", ";
        }

    return 0;
}
