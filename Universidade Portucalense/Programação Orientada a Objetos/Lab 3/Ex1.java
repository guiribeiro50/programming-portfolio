import java.util.Scanner;
public class Ex1{
    public static void main(String[] args){
        //Quantidade
        Scanner input = new Scanner(System.in);
        System.out.println("Number of pens: ");
        int number = input.nextInt();
        //Preço
        System.out.println("Price: ");
        double price = input.nextDouble();
        double total = number * price;
        System.out.println("Total: " + total);
    }
}