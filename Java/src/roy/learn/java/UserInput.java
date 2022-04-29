package roy.learn.java;

import java.util.Scanner;

public class UserInput {
	public static void main(String[] args) {
		String countryname;
		Long population;
		float GDP;
		char currency;
		
		System.out.println("Enter your country name :");
		Scanner scanner = new Scanner(System.in);
		countryname =  scanner.nextLine();
		
		System.out.println("Enter the population of your country :");
		population = scanner.nextLong();
		
		System.out.println("Enter the GDP of your country :");
		GDP = scanner.nextFloat();
		
		System.out.println("Enter the currency symbol for your country of your country :");
		currency = scanner.next().charAt(0);//char 0 will take 0th position character from entered string
		
		System.out.println("Your country name is "+countryname);
		System.out.println("Your country Population is "+population);
		System.out.println("Your country GDP is "+GDP);
		System.out.println("Your country currency is "+currency);
		
		scanner.close(); //always close "Scanner" class object to avoid memory leak , here scanner is the object
	}

}
