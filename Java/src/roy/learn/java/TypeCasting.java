package roy.learn.java;

public class TypeCasting {
	public static void main(String[] args) {
		
		//Implicit conversion
		int K;
		double Dd;
		K = 4505;
		Dd=K;
		System.out.println(Dd);
		
		//Explicit conversion
		Dd = 45478.4545d;
		K = (int) Dd;
		System.out.println(K);
	}
}
