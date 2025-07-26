import java.util.Scanner;
public class Ex2{
    public static void main(String[] args){
        //Nome e idade do 1º
        Scanner input = new Scanner(System.in);
        System.out.println("Name: ");
        String name1 = input.next();
        System.out.println("Age: ");
        int age1 = input.nextInt();
        //Nome e idade do 2º
        System.out.println("Name: ");
        String name2 = input.next();
        System.out.println("Age: ");
        int age2 = input.nextInt();
        //Média
        double media = (age1 + age2) / 2;
        System.out.println("Média: " + media);
    }
}