#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void vectors()
{
  vector<int> test_scores{100, 98, 89, 85, 93};

  cout << "Subscripts work with vectors as well. test_scores[0]: " << test_scores[0] << endl;
  cout << "Here's the syntax for the 'vector' way of doing the same thing. test_scores.at(0): "
       << test_scores.at(0)
       << endl;

  cout << "What's the first test score?: ";
  cin >> test_scores.at(0);
  cout << "The test score you just added is " << test_scores.at(0) << endl;

  cout << "There are " << test_scores.size() << " test scores" << endl;
  test_scores.push_back(100);
  cout << "Just pushed test_scores.at(5): " << test_scores.at(5) << endl;
  cout << "There are now " << test_scores.size() << " test scores" << endl;

  vector<int> temperatures(5, 80); // way of initializing a vector of size 5 with each value being 80

  // 2D vector
  vector<vector<int>> movie_ratings{
      {1, 2, 3, 4},
      {2, 1, 3, 4},
      {2, 1, 4, 3},
      {3, 2, 1, 4},
  };
  cout << "movie_ratings[3][3]: " << movie_ratings[3][3] << endl;
  cout << "movie_ratings.at(3).at(3): " << movie_ratings.at(3).at(3) << endl;
}
