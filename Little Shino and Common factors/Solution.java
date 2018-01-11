
import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {

        Scanner sc=new Scanner(System.in);
        long a,b;
        a=sc.nextLong();
        b=sc.nextLong();

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
        //for(long i=1;i<=m;i++)
        long i=1;
        while(i!=m)
        {
        if(a%i==0&&b%i==0)
          {
        //    System.out.println(i+",");
          g++;
        }
        i++;
        }
        System.out.println(g);
}
    }
}
