
#include<iostream>
using namespace std;
int main()
{


//        Scanner sc=new Scanner(System.in);
        long a,b;
        cin>>a>>b;

        if(a>=1&&b<=1000000000000.00)
        {
        long g=0;
        long m=0;
        if(a<b)
        {
          m=a;
        }
        else
        {
          m=b;
        }
        for(long i=1;i<=m;i++)
        {
        if(a%i==0&&b%i==0)
          {

          g++;
        }
        }
        cout<<g;
      }
      return 0;
      }

