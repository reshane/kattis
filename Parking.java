/* Parking.java
 * Shane Kenny
 * 2/26/2021
 */

import java.util.Scanner;

public class Parking {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		int numCases = sc.nextInt();
		for (int i = 0; i < numCases; i++) {
			int numLoc = sc.nextInt();
			int min = 101, max = 0;
			for (int j = 0; j < numLoc; j++) {
				int tmp = sc.nextInt();
				if (tmp < min) { min = tmp; }
				if (tmp > max) { max = tmp; }
			}
			System.out.println(2 * (max - min));
		}
	}
}