import java.math.BigInteger;
import java.util.Scanner;

public class BigIntegerClassJAVA
{
	static BigInteger fact(int N)
	{
		BigInteger b1 = new BigInteger("1");
		for(int i=2;i<=N;i++)
		{
			b1 = b1.multiply(BigInteger.valueOf(i));
		} 
		return b1;
	}

	static void playWithInt()
	{
		Scanner sc = new Scanner(System.in);

		int s1 = sc.nextInt();
		System.out.println(s1*s1); 
	}


	public static void main(String args[])
	{
		//playWithInt();
		Scanner sc = new Scanner(System.in);
		//Creating BigInteger in java
		// BigInteger one = new BigInteger("1111");//Creates BigInteger object and initialize it with 1111
		// BigInteger two = new BigInteger("123456789"); // Initializes big integer by string value
		// System.out.println(two.add(one));

		//Creating Biginteger from Userinput
		// String pp = sc.next();
		// BigInteger three = new BigInteger(pp);
		// System.out.println(three);

		//Changing base with Biginteger like 2,8,16
		// BigInteger four = new BigInteger("1001",2);
		// System.out.println(four);

		// four = four.multiply(three);
		// System.out.println(four);

		// four = four.divide(three);
		// System.out.println(four);

		///Computing GCD
		BigInteger b0 = new BigInteger("16");
		// valueOf methods converts long int into BigInt
		BigInteger b1 = BigInteger.valueOf(1000000007); // Initializing from a integer
		System.out.println(b1.gcd(b0));

		// To print next prime number
		System.out.println(b1.nextProbablePrime());

		//Bitwise
		//count number of setbits
		System.out.println(b1.bitCount());

		System.out.println(fact(1000));

 	}
}

























