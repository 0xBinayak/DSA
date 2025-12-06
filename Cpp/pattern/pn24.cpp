#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
             cout<<" ";
            space--;
        }
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j+=1;
        }
        int str=i-1;
        while (str)
        {
            cout<<str;
            str--;
        }
        cout<<endl;
        i+=1;
    }
}
