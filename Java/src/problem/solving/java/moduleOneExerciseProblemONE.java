/*Problem :- Make an invitation to a birthday party at your place. Input your friend's name and print the message :
"Hey <friendName>, it's my birthday this weekend and you are invited to the party at my place. Bring gifts!!! "
Example -
Input: Tom
Output: Hey Tom, it's my birthday this weekend and you are invited to the party at my place. Bring gifts!!!
*/

package problem.solving.java;

import java.util.Scanner;

public class moduleOneExerciseProblemONE {
	public static void main(String[] args) {
		System.out.println("Enter Your Friend's name ?");
		Scanner scannner = new Scanner(System.in);
		String friendName = scannner.nextLine();
		scannner.close();
		String message =  " it's my birthday this weekend and you are invited to the party at my place. Bring gifts!!!";
		
		System.out.println("Hey "+friendName + message);
	}
}
