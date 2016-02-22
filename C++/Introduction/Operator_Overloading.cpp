/*
https://www.hackerrank.com/challenges/operator-overloading
*/
class Matrix
{
public:
   vector<vector<int> > a;
   Matrix()
   {

   }
   Matrix operator + (Matrix &another)
   {
      vector<vector<int> >::iterator r1, r2;
      vector<int>::iterator c1, c2;
      Matrix res;

      for (r1 = a.begin(), r2 = another.a.begin(); r1 != a.end() && r2 != another.a.end(); r1++, r2++) 
      {
         vector<int> res_row;
         for (c1 = r1->begin(), c2 = r2->begin(); c1 != r1->end() && c2 != r2->end(); c1++, c2++) 
         {
            res_row.push_back((*c1) + (*c2));
         }
          res.a.push_back(res_row);
      }
      return res;
   }
};