//求第二大数，不用arrays方法排序，只定义一个数组，但是用了三个循环

import java.util.Scanner;
public class Test04 {
	public static void main(String[] args) {
		int [] NUM = new int [5];
		int max, min;

		Scanner sc = new Scanner(System.in);
		System.out.println("请输入第1个整数：");
		max = sc.nextInt(); min = max;
		NUM[0] = max;

		for (int i = 1; i < 5; i++) {
			System.out.println("请输入第" + (i + 1) + "个整数");

			int a = sc.nextInt(); NUM[i] = a;
			//求最大值
			if (a > max)
				max = a;
			//求最小值
			if (a < min)
				min = a;
		}

		System.out.println("最大的数是：" + max + "\n" + "最小的数是：" + min);

		//遍历数组找到最大值并替换为最小值
		for (int i = 0; i < 5; i++) {
			if (NUM[i] == max)
				NUM[i] = min;
		}

		max = NUM[0];
		for (int i = 1; i < 5; i++) {
			if (NUM[i] > max)
				max = NUM[i];
		}
		System.out.println("第二大的数是：" + max);

	}
}