package roy.learn.java;

public class VariableandDataTypes {
	public static void main(String[] args) {
        int myVar = 22;
        char character = '₹'; //₹ = '\u20B9'
        boolean K = true;
        String name = "India's";
		/*
		int myVar;
		myVar =22; <= this initialization is also valid 
		*/
        
		//Use of variable in C style 
		System.out.printf("I am %d years old.\n",myVar);
		
		//Use of variable in Java style
		System.out.println("I will be " + (myVar+1) + " on next year");
		System.out.println(character + " is " +name+ " curency, it is " +K);
	}
}
