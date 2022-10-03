import java.util.*;
public class gcd
{
    public static int greatestcommondivisor(int p,int q)
    {
        while(p!=q)
        {
            if(p>q)
            {
                p=p-q;
            }
            if(q>p)
            {
                q=q-p;
            }
        }
        return q;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER THE NUMBERS");
        int a=sc.nextInt();
        int b=sc.nextInt();
       int k =greatestcommondivisor(a,b);
        System.out.println("The gcd is =" + k);
    }
}