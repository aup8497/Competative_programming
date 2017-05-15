import java.util.*;
import java.lang.*;

public class SRMCards{
	
     public int maxTurns(int[] cards){
     	Arrays.sort(cards);
     	int n=cards.length;
        int count=0;
         for(int i=0;i<n;i++){
         	
            if(i==n-1){

            }else if(cards[i]==cards[i+1]-1)
         		i++;
            // System.out.println(cards[i]);
         	count++;
         
         }

         return count;
     }

    public static void main(String[] args) {
        int[] a={491, 492, 495, 497, 498, 499};

        SRMCards obj=new SRMCards();
        System.out.println(obj.maxTurns(a));
    }

}	