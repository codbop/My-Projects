public class StringExamples
{
	public static void main(String[] args)
	{
		//    ***   Strings are immutable   *** 
		String str1 = "Example String";
		System.out.println("Original String : " + str1);
		
		str1.toUpperCase();
		System.out.println("String after toUpperCase method : " + str1);
		
		String str2 = str1.toUpperCase();
		System.out.println("Other String after toUpperCase method : " + str2);
		
		//   ***   Checking string equality   ***
		String str3 = "Example String";
		String str4 = "Example String";
		
		//incorrect usage
		if(str3 == str4)
			System.out.println("str3 and str4 are equal");
		else
			System.out.println("str3 and str4 are not equal");
			
		//correct usage	
		if(str3.equals(str4))
			System.out.println("str3 and str4 are equal");
		else
			System.out.println("str3 and str4 are not equal");	
	}
}