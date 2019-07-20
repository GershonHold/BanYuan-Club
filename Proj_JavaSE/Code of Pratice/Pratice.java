//将字符串转化为码点并存入数组，再转化回字符串

public class Pratice {
    public static void main(String[] args) {
        String str="Hello";
        int i;

        int[] codePoints=str.codePoints().toArray();
        str=new String(codePoints,0,codePoints.length);



        for(i=0;i<str.length();i++)
        System.out.println(codePoints[i]);

        System.out.println(str);
    }
}
