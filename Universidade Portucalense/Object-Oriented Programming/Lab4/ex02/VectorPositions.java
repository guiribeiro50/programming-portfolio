public class VectorPositions
{
	public static int vector_len(int[] vector)
	{
		int length = 0;
		for (int element : vector)
			length++;
		return length;
	}

	public static void main(String[] args)
	{
		int[] vector1 = {1, 2, 3, 4};
		int length = vector_len(vector1);
		int[] vector2 = new int[length];

		for (int i = 0; i < length; i++)
		{
			if (i % 2 == 0)
				vector2[i] = vector1[i] * 2;

			else if (i % 3 == 0)
				vector2[i] = vector1[i] * 3;
			else
				vector2[i] = vector1[i];
		}

		System.out.print("Original Vector: ");
        	for (int num : vector1)
		{
            		System.out.print(num + " ");
        	}
        	System.out.println();

        	System.out.print("Modified Vector: ");
        	for (int num : vector2)
		{
            		System.out.print(num + " ");
        	}
        	System.out.println();
	}
}
