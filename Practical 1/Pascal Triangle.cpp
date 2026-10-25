#include <iostream>
using namespace std;

class PascalTriangle
{
public:
    void display(int n)
    {
        for (int i = 0; i < n; i++)
        {
            int num = 1;

            for (int j = 0; j <= i; j++)
            {
                cout << num << " ";
                num = num * (i - j) / (j + 1);
            }

            cout << endl;
        }
    }
};

int main()
{
    PascalTriangle p;
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    p.display(n);

    return 0;
}
