package Swing;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.text.BadLocationException;
import javax.swing.text.Document;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import java.awt.Font;
import java.awt.Color;
import java.util.Random;
import java.util.Scanner;
import javax.swing.JLabel;

public class MyJfrsame extends JFrame {

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
//		EventQueue.invokeLater(new Runnable() {
//			public void run() {
//				try {
					MyJfrsame frame = new MyJfrsame();
					frame.setVisible(true);
//				   
					
	}

	/**
	 * Create the frame.
	 */
	public MyJfrsame() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(114, 10, 242, 149);
		contentPane.add(scrollPane);
		//生成随机数
		Random r=new Random();
		int a=r.nextInt(5);
		//输出需要打的语句到文本域
		String [] str=new String[5];
		str[0]="HelloWorld";
		str[1]="It a good day today";
		str[2]="You are Welcome";
		str[3]="You are a good guy";
		str[4]="Hello, My friends";
		System.out.println(str[a]);
		
		JTextArea txtrAaa = new JTextArea();
		txtrAaa.setEditable(true);
		txtrAaa.setBackground(new Color(255, 204, 255));
		txtrAaa.setForeground(new Color(0, 0, 204));
		txtrAaa.setFont(new Font("Monospaced", Font.PLAIN, 18));
		txtrAaa.setText("");
		txtrAaa.getText();
		scrollPane.setViewportView(txtrAaa);
		
	
		String doc=txtrAaa.getText();
		System.out.println(doc);
		JLabel label = new JLabel(str[a]);
		label.setBounds(110, 214, 258, 15);
		contentPane.add(label);
	}
	
	
	public static void timeMillis() {
		long time1=System.currentTimeMillis();
		
		Scanner sc=new Scanner (System.in);
		String str=sc.next();
		long time2=System.currentTimeMillis();
		System.out.println("用时："+(time2-time1)/1000+"秒");
	}
	
}
