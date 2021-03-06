/**  PROBLEM CODE: TWOSTR
 * 
 * 
 * Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'. He wants to know whether the strings X and Y can be matched or not.

Input
The first line of input contain an integer T denoting the number of test cases. Each test case consists of two lines, the first line contains the string X and the second contains the string Y.

Output
For each test case, output a single line with the word Yes if the strings can be matched, otherwise output No.

Constraints
1 ≤ T ≤ 50
Both X and Y have equal length and the length is between 1 and 10.
Both X and Y consist of lower case letters and the character '?'.
Sample Input 1 
2
s?or?
sco??
stor?
sco??
Sample Output 1 
Yes
No
Explanation
First Example: There are several ways the two strings can be matched, one of those is "score".

Second Example: There is no way to match the strings.
**/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,c,i;
	string s1,s2;
	cin>>n;
	while(n--)
	{
	    c=0;
	    cin>>s1>>s2;
	    for(i=0;i<s1.length();i++)
	    {
	        if(s1.at(i)==s2.at(i) || s1.at(i)=='?' || s2.at(i)=='?')
	        c=c+1;
	    }
	    if(c==s1.length())
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
