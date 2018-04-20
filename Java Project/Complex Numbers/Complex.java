
/**
 * Write a description of class ComplexNumber here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Complex
{
    // instance variables - replace the example below with your own
    private int a;
    private int b;
    
    /**
     * Constructor for objects of class ComplexNumber
     */
    public Complex(int x, int y)
    {
        // initialise instance variables
        a = x;
        b = y;
    }
    
    public void setA(int x)
    {
        a = x;
    }
    
    public void setB(int y)
    {
        b = y;
    }    
    
    public int getA()
    {
        // put your code here
        return a;
    }
    
    public int getB()
    {
        return b;
    }
    
    public String print()
    {
        return "" + a + " + " + b + "i";
    } 
    
    public Complex add(Complex c)
    {
       Complex result = new Complex(this.getA() + c.getA(), this.getB() + c.getB());
       
       return result;
    }
    
    public Complex multiply(Complex c)
    {
       int x = 0;
       int y = 0;
       Complex result2 = new Complex(x,y);
       
       result2.setA(this.getA() * c.getA() - this.getB() * c.getB());
       result2.setB(this.getA() * c.getB() + this.getB() * c.getA());
       
       return result2;
    }
}
