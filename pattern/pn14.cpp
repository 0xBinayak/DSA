#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    // char g='A';
    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<char('A'+i+j-2);
            // g++;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
