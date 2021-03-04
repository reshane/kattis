/* Bijele.java
 * Shane Kenny
 * 2/26/2021
 */

import java.util.Scanner;

public class Bijele {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		int[] p = {1, 1, 2, 2, 2, 8};
		for (int i = 0; i < 6; i++) {
			System.out.print(p[i] - sc.nextInt() + " ");
		}
		System.out.println();
	}
}