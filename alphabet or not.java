import java.io.*;
public class Alphabet 
{
public static void main(String[] args)
{
char a = '*';
if( (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
            System.out.println(a + " is an alphabet.");
        else
            System.out.println(a + " is not an alphabet.");
    }
}
