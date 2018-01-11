import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {
     Scanner sc=new Scanner(System.in);
     int t=sc.nextInt();
     if(t>=1&&t<=100000)
     {
     int array[]=new int[t];
     int sum=0,cmp=0,l=0,temp=0;
     for(int i=0;i<array.length;i++)
     {
       l=sc.nextInt();

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


     System.out.println(data);



    }
  }
}
