
/**
 * Write a description of class Class here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Class
{
    // instance variables - replace the example below with your own
    private int x;

   public Class()
   {
       
   }    
   
   public long FindSmallestDivisibleNumber(int low, int high)
   {
       int sonuc = 1;
       
       while(true)
       {
         int i;
         for(i = low; i <= high; i++)
         {
           if(sonuc % i != 0)
           {
           sonuc++;
           break;
           }
         }
           if(i == (high + 1))
           break;
       }
        return sonuc;
    } 
}    
