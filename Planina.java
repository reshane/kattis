/* Planina.java
 * Shane Kenny
 * 2/26/2021
 */



 import java.util.Scanner;

 public class Planina {
 	public static void main(String [] args) {
 		Scanner sc = new Scanner(System.in);
 		int iterations = sc.nextInt();
 		// last times two plus one squared
 		int points  = 0, width = 1;
 		for (int i = 0; i < iterations; i++) {
 			width *= 2;
 			points = (int)Math.pow((width + 1), 2);
 		}
 		System.out.println(points);
 	}
 }