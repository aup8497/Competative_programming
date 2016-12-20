import java.util.*;

public class cf721A{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int flag=0,i,j;
		int n=in.nextInt();
		String str1=in.next();
		int num=0,lengthB=0,length=n;
		String str=str1+'W';
		ArrayList<Integer> arr=new ArrayList<Integer>();

		if(str.indexOf("B")==-1){
			System.out.println(0);
		}else{
			i=0;
			while(i<n){
				if(str.charAt(i)=='B'){
					for(j=i;j<n && str.charAt(j)=='B';j++){

					}
					length=j-i;
					num++;
					i=j-1;
					arr.add(length);
					
				}
				i++;
			}
			System.out.println(num);
//			System.out.println(Arrays.toString(arr.toArray()));
			for(int z=0;z<arr.size();z++){
			System.out.print(arr.get(z) + " ");				
			}
		}
	}
}


/*
			i=0;
			while(i<n){
				if(str.charAt(i)=="B"){
					for(j=i;j<n && str.charAt(j)=="B";j++){

					}
					length=j-i;
					num++;
					i=i-1;
					
				}
				i++;
			}

*/

/*
for(int i=0;i<=n;i++){
				if(str.charAt(i-1)=='B'&& str.charAt(i-1)=='B' && flag==1){
					arr.add(length);
					length=0;
					num++;
				}else{
					length++;
					flag=1;
				}
			}
			System.out.println(num);
			System.out.println(Arrays.toString(arr.toArray()));
		}
*/

/*
while(str.indexOf("B")!=-1){
				str=str.replaceAll("B+","");
				System.out.println("str = "+str);
				lengthB=length-str.length();
				length=length-str.length();
				num++;
				arr.add(lengthB);
			}
*/