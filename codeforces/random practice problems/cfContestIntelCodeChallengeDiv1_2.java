//codeforces contest div(1+2)
//type-A
import java.util.*;

public final class cfContestIntelCodeChallengeDiv1_2{
public static void main(String[] args) {
	
	Scanner in=new Scanner(System.in);

	String[] day=new String[7];

	day[0]="monday";
	day[1]="tuesday";
	day[2]="wednesday";
	day[3]="thursday";
	day[4]="friday";
	day[5]="saturday";
	day[6]="sunday";

	String test1=in.nextLine();
	String test2=in.nextLine();
	int i;
	for(i=0;i<7;i++){
		if(day[i].equals(test1))
			break;
	}

	if((day[(i+3)%7].equals(test2))||(day[(i+2)%7].equals(test2))||(day[i].equals(test2)))
	System.out.println("YES");
	else 
	System.out.println("NO");

	

}

}