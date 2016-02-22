/*
https://www.hackerrank.com/challenges/classes-objects
*/

class Student
{
  vector <int> sub;
  public:
  void Input()
  {
      int temp;
      for(int i=0;i<5;i++)
      {
        cin >> temp ;
        sub.push_back(temp);
      }
  }
  int CalculateTotalScore()
  {
    int sum = 0;
      for(int i=0;i<5;i++)
      {
        sum += sub[i];    
      }
    return sum;
  }
};