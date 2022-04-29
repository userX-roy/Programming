package roy.learn.java;

public class DoWhileloop {
	public static void main(String[] args) {
		int i = 1;
		
		//Do part will execute at least once even if while becmes false. 
		do {
			System.out.println(i);
			i++;
		} while (i<=30);
	}

}
