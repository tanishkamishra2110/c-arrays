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
        //inputarray
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    
        for (int i = 0; i < n; i++)
        {
           int c = 0;
           
            for (int j = 0; j < n; j++)
            { 
                if(i==j){
                continue;
            }
             if (A[i] == A[j])
                {
                    c++;
                    
                }
                }
         if(c==1){
                    cout<<"not unique element" << A[i];
                    break;
                    
                }
           
            }
            }
        
    return 0;
}