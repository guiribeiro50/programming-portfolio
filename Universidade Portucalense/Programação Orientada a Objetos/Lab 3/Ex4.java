import java.util.Scanner;
public class Ex4{
    public static void main(String [] args){
        int valor = 5;
        Scanner input = new Scanner(System.in);
        System.out.print("Value: ");
        int x = input.nextInt();
        int i = 1;
        while(i <= 10 && x != valor){
            System.out.println("Number: ");
            x = input.nextInt();
            i++;
        }
        System.out.println("X: " + x);
        System.out.println("I: " + i);
    }
}