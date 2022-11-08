package koko;
import java.util.*; 
public class mkmk {
    public static int maxSubSum1(int []a){
           int maxSum=0; int nowSum=0;
           for(int i=0;i<a.length;i++){
               nowSum=nowSum+a[i];
               if(nowSum>maxSum){
                   maxSum=nowSum;
               }
               if(nowSum<0){
                   nowSum=0;
               }
           }   
           return maxSum;
       }
    public static void main(String[] args){ 
        Scanner sb = new Scanner(System.in);  
        int n = sb.nextInt();
        int i;
        int []a = new int[100];
        for(i=0;i<n;i++)
            a[i]=sb.nextInt();
        int result=maxSubSum1(a);
        System.out.println("连续子元素的最大和为："+result);
        sb.close();
    }
}