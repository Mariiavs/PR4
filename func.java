public class func {

    public static void main (String[]args) {

        long time = System.currentTimeMillis();
        int n = 2; 
        long a = 0;
        int b = 3;
        int c = 3;
        long s = 0;
    
        for (int j = 1; j <= n; j++){
            a = 0;
            for (long i = 1; i <= 100000000; i++)
                a += b*2 + c - j;
            s+=a;
        }

        System.out.println((System.currentTimeMillis() - time)/1000.0);
        System.out.println(s);
    }
    
}
