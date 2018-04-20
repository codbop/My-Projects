import java.util.Random;

public class RandomExamples
{
	public static void main(String[] args)
	{
		Random randomGenerator = new Random();
		
		//Simple rand
		System.out.println("Generated Number : " + randomGenerator.nextInt());
		
		//Coin tossing
		System.out.println("Coin tossing : " + randomGenerator.nextInt(2));
		
		//Rolling a six-sided die
		System.out.println("Rolling a six-sided die : " + (randomGenerator.nextInt(6)+1));
	}
}