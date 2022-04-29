/*
 It's time for the highest bid. Ask three friends of 
 yours to enter their bid for a Harry Potter antique broomstick 
 and find out the highest bid by writing a program to calculate so 
 in just a single line.
 */
package problem.solving.java;

import java.util.Scanner;

public class problemThree {
	
	public static void main(String[] args) {
		
		int friend1 , friend2 , friend3;
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("Hey 'Rabi' 'Suman' 'Akash' enter the price you can pay for the Harry Potter antique broomstick : ");
		friend1 =  scanner.nextInt();
		friend2 =  scanner.nextInt();
		friend3 =  scanner.nextInt();
		scanner.close();
		
		if (friend1>friend2 && friend1 > friend3) {
			System.out.println("Rabi , the Harry Potter antique broomstick is yours");
		}
		
		else if (friend2>friend3) {
			System.out.println("Suman , the Harry Potter antique broomstick is yours");
		}
		
		else {
			System.out.println("Akash , the Harry Potter antique broomstick is yours");
		/*
		 Code optimization :-
		 
		 */
		}
	}
}
