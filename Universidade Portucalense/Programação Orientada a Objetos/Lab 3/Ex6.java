import java.util.Scanner;
public class Ex6{
    public static void main(String [] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter diameter: ");
        double diameter = input.nextDouble();
        double raio = diameter / 2;
        double volume = (4.0 / 3.0) * Math.PI * Math.pow(raio, 3);
        if (volume <= 120 || volume > 550){
            System.out.println("Not classified");
        }
        else if (volume > 120 && volume <= 250){
            System.out.println("Class 1");
        }
        else {
            System.out.println("Class 2");
        }
        System.out.printf("Volume é: %.2f ", volume);
        }
    }