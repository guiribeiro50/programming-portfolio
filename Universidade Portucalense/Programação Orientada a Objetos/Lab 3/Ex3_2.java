import java.util.Scanner;
public class Ex3_2{
    public static void main(String[] args){
        int sum = 0;
        int nota = 0;
        int count = 0;
        Scanner input = new Scanner(System.in);
        while(nota >= 0){
            System.out.println("Grade: ");
            int grade = input.nextInt();
            if(grade < 0) {
                break;
            }
            else{
                sum += grade;
                count += 1;
            }
        }
        double media = sum / count;
        System.out.println("Média das notas: " + media);
    }
}