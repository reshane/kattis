/* AlphabetSpam.java
 * Shane Kenny
 * 2/26/2021
 */

import java.util.Scanner;

public class AlphabetSpam {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.next();
		int[] arr = new int[4];
		for (int i = 0; i < input.length(); i++) {
			int curr = (int)input.charAt(i);
			if (curr > 64 && curr < 91) { arr[2]++; }
			else if (curr > 96 && curr < 122) { arr[1]++; }
			else if (curr == 95) { arr[0]++; }
			else { arr[3]++; }
		}
		for (int i = 0; i < arr.length; i++) {
			System.out.println((double)arr[i] / (double)input.length());
		}
	}
}