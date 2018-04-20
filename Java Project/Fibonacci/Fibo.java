
/**
 * Write a description of class Fibo here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Fibo
{
    // instance variables - replace the example below with your own
    private int n1;
    private int n2;

    /**
     * Constructor for objects of class Fibo
     */
    public Fibo()
    {
        // initialise instance variables
        n1 = 1;
        n2 = 1;
    }
    
    public int get()
    {
        // put your code here
        return n1;
    }
    
    public void reset()
    {
        n1 = 1;
        n2 = 1;
    }
    
    public void next()
    {
        int hold = n1 + n2;
        n1 = n2;
        n2 = hold;
    }
}
