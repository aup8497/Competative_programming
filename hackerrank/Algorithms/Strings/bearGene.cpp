// bearGene.cpp
//this is the correct code ,but written by someone.
//try it out yourself ,if you dont get see this.

#include <map>
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
bool validityCheck(map<char, int> dict, int limit){
    if(dict['A'] <= limit && dict['C'] <= limit && dict['G'] <= limit && dict['T'] <= limit){
        return true;
    }else{
       return false;
    }
}

int main() {
    int N, maxIndex = 0, out = 999999,maxindex;;
    map<char, int> dict;
    string str;
    cin >> N >> str;
    int limit = N / 4;
    for (int i = N - 1; i >= 0; i--){
        dict[str[i]]++;
        if(!validityCheck(dict, limit)){
            maxIndex = i + 1;
            dict[str[i]]--;
            break;
        }
    }
    	int maxindex1=maxIndex;

    for(int minIndex = -1; minIndex < N - 1 && maxIndex < N && minIndex < maxIndex; minIndex++){
        while(!validityCheck(dict, limit) && maxIndex < N){
            dict[str[maxIndex]]--;
            maxIndex++;
        }
         if(maxIndex > N || !validityCheck(dict, limit)){
            break;
        }
        int substringLength = max(0, maxIndex - minIndex - 1);
        maxindex=minIndex;
        if(substringLength < out){
            out = substringLength;
        }
        dict[str[minIndex + 1]]++;
    }
    cout << maxindex1 << " " << maxindex << endl;
    cout << out << endl;
    return 0;
}
