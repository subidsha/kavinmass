import java.io.*;
import java.util.Scanner;
 class LargestOfThreeNumbers
{
   public static void main(String args[])
   {
      int k, l, m;
      System.out.println("Enter three integers ");
      Scanner in = new Scanner(System.in);
      k = in.nextInt();
      l = in.nextInt();
      m = in.nextInt();
       if ( k > l && k > m )
         System.out.println("First number is largest.");
      else if ( l > k && l > m )
         System.out.println("Second number is largest.");
      else if ( m > k && m > l )
         System.out.println("Third number is largest.");
      else   
         System.out.println("Entered numbers are not distinct.");
   }
}
