#include <bits/stdc++.h>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
  string s = "AEIOUaeiou";
  char c = kingdom[kingdom.size()-1]; 
  if(c == 'y' || c == 'Y') ruler = "nobody";
  else if(s.find(c) != string::npos) ruler = "Alice";
  else ruler = "Bob";
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
