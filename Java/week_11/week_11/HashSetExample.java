import java.util.HashSet;

public class HashSetExample
{
	public static void main(String[] args)
	{
		HashSet<String> names = new HashSet<String>();
		
		names.add("Ahmet");
		names.add("Mehmet");
		names.add("Ali");
		names.add("Ayse");
		names.add("Fatma");
		
		for(String item : names)
			System.out.println(item);
			
		names.add("Ali");

		System.out.println("*****************");
		
		for(String item : names)
			System.out.println(item);	
	}
}