using namespace std;

int minimumWaitingTime(vector<int> queries) {
  // Write your code here.

  sort(queries.begin(),queries.end());
  int total = 0;
  int add = 0; 

  for(int i =0; i < queries.size()-1; i++){
    add += queries[i]; //allows you to track right sum (of what we want)
    total += add;
  }


  
  return total;
}