#include <bits/stdc++.h>
using namespace std;

int priority(char stack_top , char ch2){
    unordered_map<char , int> um = {{'^' , 3} , {'*' , 2} , {'/' , 2} , {'+' , 1} ,  {'-',1}};
    if(um.find(stack_top) != um.end() && um.find(ch2) == um.end()){
        return 1;
    }else if(um.find(stack_top) == um.end() && um.find(ch2) != um.end()){
        return 2;
    }else if(um.find(stack_top) != um.end() && um.find(ch2) != um.end()){
        if(um[stack_top] > um[ch2]){
            return 1;
        }else if(um[stack_top] < um[ch2]){
            return 2;
        }else{
            return 3;
        }
    }
}

int main()
{
    string s = "a+b*c^d";
    // cin >> s;
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '1' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(!st.empty()){
                if(priority(st.top() , s[i]) == 1){
                    ans+= st.top();
                    st.pop();
                    st.push(s[i]);
                }else if(priority(st.top() , s[i]) == 2){
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout<<ans<<endl;
    
    return 0;
}