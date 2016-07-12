
import java.util.Scanner;

public class Sum2 {

    
    public static void main(String[] args) {
        System.out.println("program that adds up two numbers\n");
        int num1;
        int num2;
        int sum=0;
        
        Scanner input=new Scanner(System.in);
        
       System.out.println("enter the first number\n");
       num1=input.nextInt();
       System.out.println("enter the second number\n");
       num2=input.nextInt();
       
       sum=num1+num2;
       
       System.out.printf("the sum is %d", sum); 
    
    }
}
