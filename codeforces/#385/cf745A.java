import java.util.*;

public class cf745A{
	public static void main(String[] args) {
			Scanner in=new Scanner(System.in);
			String str=in.next();
			int res=0;
			ArrayList<String> arr=new ArrayList<>();

			for(int i=0;i<str.length();i++){
				str=str.substring(1,str.length())+str.charAt(0);
			//	System.out.println(str);
				if(!arr.contains(str)){
					arr.add(str);
				}

			}
				System.out.println(arr.size());



	}
}


