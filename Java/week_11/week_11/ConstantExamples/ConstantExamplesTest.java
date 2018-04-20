public class ConstantExamplesTest
{
	public static void main(String[] args)
	{
		ConstantExamples ce_1 = new ConstantExamples(10);
		ConstantExamples ce_2 = new ConstantExamples(20);
		ConstantExamples ce_3 = new ConstantExamples(30);
		
		ce_1.getConstantValues();
		System.out.println("****************");
		ce_2.getConstantValues();
		System.out.println("****************");
		ce_3.getConstantValues();
	}
}