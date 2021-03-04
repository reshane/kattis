/* Autori.java
 * Shane Kenny
 * 2/26/2021
 */

 import java.util.Scanner;
 import java.io.*;

 public class Autori {
 	public static void main(String [] args) {
 		Scanner sc = new Scanner(System.in);
 		String input = sc.nextLine();

 		System.out.print(input.charAt(0));

 		for (int i = 1; i < input.length() - 1; i++) {
 			if (input.charAt(i) == '-') {
 				System.out.print(input.charAt(i + 1));
 			}
 			if (!(input.substring(i).contains("-"))) {
 				System.out.println("");
 				break;
 			}
 		}
 	}
 }