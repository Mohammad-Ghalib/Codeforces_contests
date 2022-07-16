#include <bits/stdc++.h>
using namespace std;

vector<int> GetHIndexScore(vector<int> citations_per_paper) {
  vector<int> h_index,count;
  int num=0;
  // TODO: Calculate and return h-index score for each paper.
  for(int i=0; i<citations_per_paper.size(); i++){
      if(citations_per_paper[i] > num){
        count.push_back(citations_per_paper[i]);
        count.erase(std::remove(count.begin(), count.end(), (i-1)), count.end());
        num++;
      }

      int n = count.size();
      int m = std::min((i+1),n);
      h_index.push_back(m); 

      //count.erase(std::remove(count.begin(), count.end(), i), count.end());
  }
  return h_index;
}

int main() {
  int tests;
  cin >> tests;
  for (int test_case = 1; test_case <= tests; test_case++) {
    // Get number of papers for this test case
    int paper_count;
    cin >> paper_count;
    // Get number of citations for each paper
    vector<int> citations(paper_count);
    for (int i = 0; i < paper_count; i++) {
      cin >> citations[i];
    }
    vector<int> answer = GetHIndexScore(citations);
    cout << "Case #" << test_case << ": ";
    for (int i = 0; i < answer.size(); i++) {
      cout << answer[i] << " ";
    }
    cout << endl;
  }
  return 0;
}