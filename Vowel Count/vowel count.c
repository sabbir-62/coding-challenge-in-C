/*
Problem Statement:
You will be given a string S as input contains only small English alphabets. You need to tell the number of vowels in it. The string will not contain any spaces.

Note: Vowels are a,e,i,o and u

Input Format:
Input will contain a string S.

Constraints:
1. 1 <= |S| <= 1000 ; Here |S| means the length of string S.

Output Format;
Output the number of vowels.

Sample Input 0
thefoxisgone

Sample Output 0
5

Sample Input 1
ilikeassignments

Sample Output 1
6
*/


#include<stdio.h>
#include<string.h>
int main(){

int i, count=0;
char ch[1001];

scanf("%s", &ch);
for(i=0;i<strlen(ch);i++){
    if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
        count++;
    }
}
printf("%d\n", count);
return 0;
}
