/*
You work in pairs in the computer lab. Play a prank with your partner and swap the marks entered for him with yours. Remember, 'you can only use 2 variables', else you'll get caught.
Example -
Input: a = 24, b = 43
Output: a = 43, = 24 
*/
package problem.solving.java;

import java.util.Scanner;
public class problemTwo {
	public static void main(String[] args) {
		System.out.println("Enter number 'A' and 'B': ");
		
		Scanner scanner = new Scanner(System.in);
		
		int A = scanner.nextInt();
		int B = scanner.nextInt();
		
		scanner.close();
		
		System.out.println("Before Swap A was "+A+" B was "+B);
		
		
		A = A+B; // 30 = 20+10
		B = A-B; //20 = 30-10
		A = A-B; //10 = 30-20
		
		System.out.println("After Swap A is "+A+" , B is "+B);
 	}

}
