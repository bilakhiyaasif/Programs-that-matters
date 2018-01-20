#include <iostream>
using namespace std;

int main()
{

    int l,r,k,c=0;
   
    cin>>l>>r>>k;
    for(int i=l;i<=r;i++)
    {
     if(i%k==0)
        {
          // printf("\ni=%d",i);
            c++;
        }
    }
   // printf("\nl=%d r=%d k=%d",l,r,k);
   cout<<c;
    return 0;
}
