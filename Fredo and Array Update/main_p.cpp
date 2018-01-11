#include<iostream>
using namespace std;
int main()
{

     int t;
     cin>>t;//sc.nextInt();
    if(t>=1&&t<=100000)
    {
     int array[t];//=new int[t];
     int sum=0,cmp=0,l=0,temp=0;
     for(int i=0;i<t;i++)
     {
       //l=sc.nextInt();
       cin>>l;
       if(l>=1&&l<=1000)
       {
       array[i]=l;
       sum=sum+array[i];
       }
     }
     for(int i=0;i<t;i++)
     {
       for(int j=0;j<t;j++)
       {
         if(array[i]<array[j])
         {
           temp=array[i];
           array[i]=array[j];
           array[j]=temp;
         }
       }
     }
   int data=0;
     for(int i=0;i<t;i++)
     {
       for(int j=0;j<t;j++)
       {
         cmp+=array[i];
       }
       if(sum<cmp)
       {
         data=array[i];
         break;
       }
       cmp=0;
     }
    cout<<data;
  }
  return 0;
}
