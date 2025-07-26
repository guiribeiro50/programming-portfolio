import java.util.Scanner;
public class Ex5{
    public static void main(String[] args){
        int i = 1;
        Scanner input = new Scanner(System.in);
        while (true){
            System.out.println("Click Enter to continue or Stop to end: ");
            String escolha = input.nextLine();
            if (escolha.equals("Stop")){
                break;
            }
            else {
                Scanner temp = new Scanner(System.in);
                System.out.println("Enter temperature: ");
                double temperature = temp.nextDouble();
                double F = 32 + ((9 * temperature) / 5);
                System.out.println("Fahrenheit: " + F);
            }
        }
    }
}