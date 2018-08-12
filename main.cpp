#include <iostream>

using namespace std;

int main()
{

unsigned long int t;
cin>>t;
while(t--)
{
    unsigned long int n,s,a=0;
    cin>>n;
    for(  ; n!=0; n=n/10)
    {
      s=n%10;
      if(s==4)
      {


        a++;
        }


    }
    cout<<a<<endl;

}
    return 0;
}
