import java.util.HashMap;

public class HashMapExample
{
	public static void main(String[] args)
	{
		HashMap<String,String> phoneBook = new HashMap<String,String>();
		
		phoneBook.put("Ahmet", "555");
		phoneBook.put("Mehmet", "505");
		phoneBook.put("Ali", "532");
		phoneBook.put("Ayse", "542");
		phoneBook.put("Fatma", "545");
		
		//Phone number of Ali
		System.out.println("Phone number of Ali : " + phoneBook.get("Ali"));
		
		phoneBook.put("Ali", "535");
		
		//Phone number of Ali
		System.out.println("Phone number of Ali : " + phoneBook.get("Ali"));
	}
}