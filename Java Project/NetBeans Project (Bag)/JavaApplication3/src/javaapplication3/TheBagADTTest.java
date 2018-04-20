package javaapplication3;


public class TheBagADTTest 
{
    public static void main(String[] args)
    {
        TheBagADT<Integer> bag = new TheBagADT<Integer>();
        for( int i = 0; i <= 10; i++)
        bag.add(i);
        
        bag.add(5);
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of 5 is: " + bag.elementSize(5));
        
        System.out.println("Is bag contains 5: " + bag.contains(5));
        System.out.println("Is bag contains 15: " + bag.contains(15));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        
        bag.remove(3);
        bag.remove(0);
        bag.remove(5);
        System.out.println("");
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        bag.remove(5);
        bag.remove(10);
        bag.remove(3);
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        bag.remove(15);
        bag.remove(2);
        bag.remove(1);
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        
        bag.add(8);
        bag.add(27);
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        bag.remove(4);
        bag.remove(8);
        bag.remove(9);
        bag.remove(27);
        bag.remove(30);
        System.out.println("");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of 5 is: " + bag.elementSize(5));
        System.out.println("Is bag contains 15: " + bag.contains(15));
        System.out.println("Is bag contains 6: " + bag.contains(6));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Element size of 8 is: " + bag.elementSize(8));
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        bag.remove(27);
        bag.remove(27);
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        
        bag.remove(8);
        bag.remove(7);
        bag.remove(6);
        System.out.println("");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of 5 is: " + bag.elementSize(5));
        System.out.println("Is bag contains 15: " + bag.contains(15));
        System.out.println("Is bag contains 6: " + bag.contains(6));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Element size of 27 is: " + bag.elementSize(27));
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        
        bag.add(90);
        bag.add(90);
        bag.add(90);        
        bag.add(70);
        System.out.println("");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of 90 is: " + bag.elementSize(90));
        System.out.println("Is bag contains 90: " + bag.contains(90));
        System.out.println("Is bag contains 15: " + bag.contains(15));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Element size of 35 is: " + bag.elementSize(35));
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
       
        bag.clear();
        System.out.println("");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of 5 is: " + bag.elementSize(5));
        System.out.println("Is bag contains 5: " + bag.contains(5));
        System.out.println("Is bag contains 15: " + bag.contains(15));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        
        bag.remove(9);
        System.out.println("");
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
    }
}
