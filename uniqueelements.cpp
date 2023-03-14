#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count += 1;
                }
            }
            if (count == 1)
            {
                cout << A[i] <<" "<<i<< " " <<endl;
                break;
            }
        }
        t--;
    }
    return 0;
}