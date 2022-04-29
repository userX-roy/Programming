//Date : 24/04/2000

package assigenment.internshala.java;

import java.util.Scanner;

public class Assigenment1_Module1 {
	public static void main(String[] args) {
		String Name , BloodGroup;
		int age;
		
		//Scanner class declaration
		Scanner scanner = new Scanner(System.in);
		
		//Taking user input
		System.out.println("Enter Your Name : ");
		Name = scanner.nextLine();
		System.out.println("Enter Your Blood Group : ");
		BloodGroup = scanner.next();
		System.out.println("Enter Your Age : ");
		age = scanner.nextInt();
		
		scanner.close();
		
		//printing desire output:
		
		if (age>=20) {
			
			System.out.println("-------------------------------");
			System.out.println(" Name : "+Name);
			System.out.println(" Age : "+age);
			System.out.println(" Blood Group : "+BloodGroup);
			System.out.println("-------------------------------");
			System.out.println(" Your Group is : RED");
			System.out.println("-------------------------------");
		}
		else if (age<20 && age >= 15) {
			System.out.println("-------------------------------");
			System.out.println(" Name : "+Name);
			System.out.println(" Age : "+age);
			System.out.println(" Blood Group : "+BloodGroup);
			System.out.println("-------------------------------");
			System.out.println(" Your Group is : BLUE");
			System.out.println("-------------------------------");
		}
		else if (age<15 && age >= 10) {
			System.out.println("-------------------------------");
			System.out.println(" Name : "+Name);
			System.out.println(" Age : "+age);
			System.out.println(" Blood Group : "+BloodGroup);
			System.out.println("-------------------------------");
			System.out.println(" Your Group is : YELLOW");
			System.out.println("-------------------------------");
		}
		
		else {
			System.out.println("-------------------------------");
			System.out.println("Enter a valid age");
			System.out.println("-------------------------------");
		}
	}

}
