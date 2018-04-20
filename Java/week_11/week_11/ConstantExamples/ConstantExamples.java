public class ConstantExamples
{
	private static final int CONSTANT_1 = 50;
	private final int CONSTANT_2;
	
	public ConstantExamples(int cValue)
	{
		CONSTANT_2 = cValue;
	}
	
	public void getConstantValues()
	{
		System.out.println("Class Constant : " + CONSTANT_1);
		System.out.println("Instance Constant : " + CONSTANT_2);
	}
}