import java.util.Scanner;

public class CalculateGradesAverage
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);

		int[] numbers = new int[100];
		double[] grades = new double[100];
		double sum = 0;

        	for (int i = 0; i < 100; i++)
        	{
                	System.out.println("Insert the student number: ");
                	numbers[i] = input.nextInt();

                	System.out.println("Insert the student " + numbers[i] + " grade: ");
                	grades[i] = input.nextDouble();

                	sum += grades[i];
        	}

        	double average = sum / 100;

        	for (int i = 0; i < 100; i++)
        	{
                	if (grades[i] > average)
                	{
                        	System.out.println("Student Number: " + numbers[i]);
                        	System.out.println("Grade: " + grades[i]);
                	}
        	}

        	input.close();
	}
}
