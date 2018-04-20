package javaapplication3;


public class TheBagADTTest2 
{
    public static void main(String[] args)
    {
        TheBagADT<String> bag = new TheBagADT<String>();
        bag.add("Ali");
        bag.add("Mehmet");
        bag.add("Zeynep");
        bag.add("Mert");
        bag.add("Mustafa");
        bag.add("Ali");
        bag.add("Mehmet");
        bag.add("Mehmet");
        
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of Zeynep is: " + bag.elementSize("Zeynep"));
        System.out.println("Element size of Ali is: " + bag.elementSize("Ali"));
        System.out.println("Element size of Mehmet is: " + bag.elementSize("Mehmet"));
        System.out.println("Is bag contains Ali: " + bag.contains("Ali"));
        System.out.println("Is bag contains Ayse: " + bag.contains("Ayse"));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
        
        bag.remove("Ali");
        bag.remove("Mehmet");
        bag.remove("Mert");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of Zeynep is: " + bag.elementSize("Zeynep"));
        System.out.println("Element size of Ali is: " + bag.elementSize("Ali"));
        System.out.println("Element size of Mehmet is: " + bag.elementSize("Mehmet"));
        System.out.println("Is bag contains Ali: " + bag.contains("Ali"));
        System.out.println("Is bag contains Mert: " + bag.contains("Mert"));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
        
        bag.add("Cüneyt");
        bag.add("Cüneyt");
        bag.add("Berkan");
        bag.add("Berk");
        bag.add("İsmail");
        bag.add("Alpay");
        bag.add("Alpay");
        bag.add("Emir");
        bag.remove("Mustafa");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of Zeynep is: " + bag.elementSize("Zeynep"));
        System.out.println("Element size of Mustafa is: " + bag.elementSize("Mustafa"));
        System.out.println("Is bag contains Mustafa: " + bag.contains("Mustafa"));
        System.out.println("Is bag contains Cüneyt: " + bag.contains("Cüneyt"));
        System.out.println("Element size of Alpay is: " + bag.elementSize("Alpay"));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
        
        bag.clear();
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of Zeynep is: " + bag.elementSize("Zeynep"));
        System.out.println("Element size of Mustafa is: " + bag.elementSize("Mustafa"));
        System.out.println("Is bag contains Mustafa: " + bag.contains("Mustafa"));
        System.out.println("Is bag contains Cüneyt: " + bag.contains("Cüneyt"));
        System.out.println("Element size of Alpay is: " + bag.elementSize("Alpay"));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
        
        bag.add("Ayse");
        bag.add("Mehmet");
        bag.add("Ayse");
        bag.remove("Ayse");
        bag.remove("Mehmet");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of Ayse is: " + bag.elementSize("Ayse"));
        System.out.println("Is bag contains Ayse: " + bag.contains("Ayse"));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
        
        bag.remove("Ayse");
        System.out.println("The bag contains: " + bag);
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
        
        bag.remove("Berk");
        System.out.println("The bag contains: " + bag);
        System.out.println("Element size of Zeynep is: " + bag.elementSize("Zeynep"));
        System.out.println("Element size of Ali is: " + bag.elementSize("Ali"));
        System.out.println("Element size of Mehmet is: " + bag.elementSize("Mehmet"));
        System.out.println("Is bag contains Ali: " + bag.contains("Ali"));
        System.out.println("Is bag contains Ayse: " + bag.contains("Ayse"));
        System.out.println("The size of the bag is: " + bag.size());
        System.out.println("Is the bag empty?: " + bag.isEmpty());
        System.out.println("Distinct number of elements is: " + bag.distinctSize());
        System.out.println("");
    }
}    
