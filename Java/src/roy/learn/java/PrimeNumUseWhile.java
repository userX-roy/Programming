package roy.learn.java;

import java.util.Scanner;

public class PrimeNumUseWhile {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter a number: ");
		int num = scanner.nextInt();
		scanner.close();
		
		int check = 2;
		while (check<=(num/2)) {
			int rem = num % check;
			if(rem == 0) {
				System.out.println("The number "+num+" is not prime");
				break;
			}
			
			check++;
		}
		if(check>(num/2))
			System.out.println("The number "+num+" is a prime number");
		
	}

}
