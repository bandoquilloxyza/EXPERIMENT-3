#include <iostream>
using namespace std;

int Province = 3;
int Day = 7;

int main()
{
    char a = '@';
    char temperature[Province][Day];
    cout << "Enter all temperature for a week of Province A, Province B and then Province C.\n";
    for (int i = 0; i < Province; ++i)
    {
        a++;
        for(int j = 0 ; j < Day; ++j)
        {
            std::cout << "Province " << a << ", Day " << j + 1 << " : ";
            cin >> temperature[j];
        }
    }

    cout << "\n\nDisplay Elements:\n";

    char b = '@';
    for (int i = 0; i < Province; ++i)
    {
        b++;
        for(int j = 0; j < Day; ++j)
        {
            std::cout << "Province " << b << ", Day " << j + 1 << " = " << temperature[j] << endl;
        }
    }

    return 0;
}
