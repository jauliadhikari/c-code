import java.util.*;
public class Main
{
	public static void main(String[] args) 
  {
	Scanner scn = new Scanner(System.in);
    int N = scn.nextInt();
    for(int i=1; i<=N; i++)
    {
	    for(int j=1; j<i; j++)
        {
            System.out.print("  ");
        }
        System.out.print(i+" ");
        for(int j=1; j<=((N - i) * 2 - 1); j++)
        {
            System.out.print("  ");
        }
        if(i != N){
            System.out.print(i+" ");
        }
        System.out.println();
    }

    for(int i=N-1; i>=1; i--)
    {
        for(int j=1; j<i; j++)
        {
            System.out.print("  ");
        }
        System.out.print(i+" ");
        
        for(int j=1; j<=((N - i ) * 2 - 1); j++)
        {
            System.out.print("  ");
        }
        
        System.out.print(i+" ");

        System.out.println();    
    }
  }
}

