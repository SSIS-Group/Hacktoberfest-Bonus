#include <iostream>

using namespace std;

int main()
 {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t,n,a=0,b=7;

    cin>>t;

    while(t--)

    {

        cin>>n;

        if(abs(n-a) <= abs(n-b))
	{

            cout<<"A\n";

            a = n;

        }
 	else
	{

            cout<<"B\n";

            b = n;

        }

    }

}