import java.util.Queue;
import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.LinkedBlockingQueue;

public class ApagandoGanhando {
	public static void main(String[] args) {
		Queue<Integer> a = new LinkedBlockingQueue<Integer>();
		
		a.add(4);
		a.add(2);
		
		for (Integer integer : a) {
			System.out.println(integer);
		}
		a.add(5);
		a.addAll(new {1,5,7});
		
		int n, k;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k = sc.nextInt();
		Random r = new Random(10);
		String randomStd = "";
		for (int j = 0; j < n; j++) {
			randomStd += (r.nextInt(10) + 1);
		}
		System.out.println(randomStd);
		
		String std = "";
		while (randomStd.length() != k-n){
			
		}
	}
}


