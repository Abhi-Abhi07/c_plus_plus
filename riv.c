#include <bits/stdc++.h> 
int countOpenBraces(stack<char> s){
  int cnt=0;
  while(!s.empty()){
    if(s.top()=='{'){
      cnt++;
    }
    s.pop();
  }
  return cnt;
}

int countCloseBraces(stack<char> s){
  int cnt=0;
  while (!s.empty()) {
    if (s.top() == '}') {
      cnt++;
    }
    s.pop();
  }
  return cnt;
}

int findMinimumCost(string str) {
  // Write your code here
  stack<char>s;
  if ((str.length() % 2) != 0) {
    return -1;
  }
  for(int i=0; i<str.length(); i++){
    char ch=str[i];
    if (s.empty() || ch=='{' && s.top()=='{' || ch=='}' && s.top()=='}') {
      s.push(ch);
    }
    else{
      s.pop();
    }
  }
  if (s.empty()) {
    return 0;
  }

  int open = countOpenBraces(s);
  int close = countCloseBraces(s);

  int ans = ((open + 1) / 2) + ((close + 1) / 2);
  return ans;
}