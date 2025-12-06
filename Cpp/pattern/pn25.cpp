#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {

        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j+=1;
        }
        while (j<=n+i-1)
        {
            cout<<"*";
            j+=1;
        }
        int num = n - i + 1;
        while (num >= 1)
            {
                    cout << num;
                    num--;
            }
        cout<<endl;
        i+=1;
    }
}
