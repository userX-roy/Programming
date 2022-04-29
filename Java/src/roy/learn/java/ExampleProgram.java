package roy.learn.java;

public class ExampleProgram {

    public static void main(String[] args) {
        System.out.println("I am Saikat");
        int A , B , C;
        A = 17 ;
        B = 3;
        C = A+B;
        System.out.println("Total of 17 and 3 is " +C);
        
        //Integer.MIN_VALUE is a constant in the Integer class of java.lang package that specifies that stores the minimum possible value for any integer variable in Java.
        int MyIntMinValue = Integer.MIN_VALUE;
        
        //Integer.MAX_VALUE is a constant in the Integer class of java.lang package that specifies that stores the maximum possible value for any integer variable in Java.
        int MyIntMaxValue = Integer.MAX_VALUE;
       
        System.out.println("Minimum value of Integer : " +MyIntMinValue);
        System.out.println("Maximum value of Integer : " +MyIntMaxValue);
        
        // Adding +1 and -1 to maximum and minimum number supported by Java compiler
        System.out.println("Busting out the maximum value supported by Java " +(MyIntMaxValue+1));
        System.out.println("Busting out the minimum value supported by Java " +(MyIntMinValue-1));
    }
}
