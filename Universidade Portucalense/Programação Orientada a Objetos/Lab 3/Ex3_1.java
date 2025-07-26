import java.util.Scanner;
public class Ex3_1{
    public static void main(String[] args){
        int sum = 0;
        Scanner input = new Scanner(System.in);
        for (int i = 1; i <= 10; i++){
            System.out.println("Grade: ");
            int grade = input.nextInt();
            sum += grade;
        }
        double media = sum / 10;
        System.out.println("Média das notas: " + media);
    }
}