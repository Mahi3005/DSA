#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
        bool palindrome(string str){
            int p1 = 0;
            int p2 = str.length() - 1;

            while(p1 < p2){
                if(str[p1] != str[p2]){
                    return false;
                }
                p1++;
                p2--;
            }
            return true;
        }
};

int main(){
    Solution sol;
    string str = "madam";

    cout << sol.palindrome(str);
    return 0;
}
