import java.math.BigInteger;
import java.util.Scanner;

class JULKA_SPOJ
{
	public static void main(String[] args) {
	
	Scanner sc = new Scanner(System.in);	
	int i;
	for(i=0;i<10;i++)
	{
		BigInteger b1 = sc.nextBigInteger();
	    BigInteger b2 = sc.nextBigInteger();
	    BigInteger b3 = new BigInteger("0");
	    b1 = b1.subtract(b2);
	    b1 = b1.divide(BigInteger.valueOf(2));
	    b3 = b1.add(b2);
	    System.out.println(b3);
	    System.out.println(b1);
	 }	
	}
}