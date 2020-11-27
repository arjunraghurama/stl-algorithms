#include <iostream>
#include <string>
#include <algorithm> 
#include <vector>

using namespace std;

int main()
{
  vector<int> v = { 4, 6, 7, 9, 11, 4};
  
  // This creates a max_heap
  make_heap(v.begin(), v.end());
  
  // Max element will be at the root node
  // Output:11
  cout<<v.front()<<endl;
  
  // If a new element is added at the enc of the vector, 
  // heap can be reconstructed by push_heap()
  // Output:15
  v.push_back(15);
  push_heap(v.begin(), v.end());
  cout<<v.front()<<endl;
  
  // Delete the max element from vector
  // Output:15
  pop_heap(v.begin(), v.end());
  cout<<v.back()<<endl;
  v.pop_back(); // Deleteing now
  cout<<v.front()<<endl; // Output:11 Now max element is 11
  for (int &x : v)
  {
      cout<<x<<" ";
  }
  
  cout << endl; 
  is_heap(v.begin(), v.end())? cout << "Its a heap ": cout << "Its not a heap"; 
  
  cout << endl; 
  cout<<endl;
  sort_heap(v.begin(), v.end());
  for (int &x : v)
  {
      cout<<x<<" ";
  }
  
  return 0;
}
