package roy.learn.java;

public class FactorialUsingWhile {
	public static void main(String[] args) {
		long num = 4;
		long fact = 1;
		while (num>0) {
			fact *=num ;
			num --;
		}
		
		System.out.println(fact);
	}

}
