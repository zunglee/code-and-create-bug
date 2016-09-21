#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (n < 1)
    {
        cout << "Error: Enter a positive integer: ";
        cin >> n;
    }

    for (int count = 1; count <= n; count++)
    {
        double pi;
        if (count == 1)
        {
            pi = 4;
            cout << count << ":" << pi << endl;
        }
        else if (count % 2 == 1)
        {
            pi = 4 + (4/((2 * count) - 1));
            cout << count << ":" << pi << endl;
        }
        else
        {
            pi = 4 - (4/((2 * count) - 1));
            cout << count << ":" << pi << endl;
        }

    }
system("pause");
    return 0;
}
