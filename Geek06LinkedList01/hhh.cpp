#include <iostream>
#include <string>
using namespace std;

//   leetcode 回文字符串版本
bool isPalindrome(string s) {
        if(s.size()==0)
        {
            return true;
        }
        string test;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                test+=tolower(ch);
            }
        }

        int len=test.size();

        int count=len/2;
        for(int i = 0; i <count; i++)
        {
            if(test[i]!=test[len-i-1])
            {
                
                return false;    
            } 
        }
   
        return true;
    }

bool testPalindromeString(string &testString)
{
    int len=testString.size();
    //int count=len%2?(len/2+1):(len/2);
    int count=len/2;
    for(int i = 0; i <count; i++)
    {
        if(testString[i]!=testString[len-i-1])
        {
            cout<<testString<<" is not palindrome "<<endl;
            return false;    
        } 
    }
    cout<<testString<< " is palindrome "<<endl;
    return true;
}
int main()
{
    //判断一个字符串是否为回文
    string s1("level");
    string s2("1");
    string s3("A man, a plan, a canal: Panama");
    testPalindromeString(s1);
    testPalindromeString(s2);
    testPalindromeString(s3);
    // int len=s2.size();
    // int count=len%2?(len/2+1):(len/2);
    // cout<<count<<endl;
    return 0;
}