#include <iostream>
using namespace std;
class bankdeposite
{
  int printciple;
  int years;
  float interestrate;
  float returnvalue;

public:
  bankdeposite() {}
  bankdeposite(int p, int y, float r);
  bankdeposite(int p, int y, int r);
  void show()
  {
    cout << "principle amount was " << printciple
         << ". returnvalue after " << years << " year is " << returnvalue << endl;
  }
};
bankdeposite ::bankdeposite(int p, int y, float r)
{
  printciple = p;
  years = y;
  interestrate = r;
  returnvalue = printciple;
  for (int i = 0; i < years; i++)
  {
    returnvalue = returnvalue * (1 + interestrate); //returnvalue+returnvalue*r;
  }
}
bankdeposite ::bankdeposite(int p, int y, int r)
{
  printciple = p;
  years = y;
  interestrate = float(r) / 100;
  returnvalue = printciple;
  for (int i = 0; i < years; i++)
  {
    returnvalue = returnvalue * (1 + interestrate); //returnvalue+returnvalue*r;
  }
}

int main()
{
  bankdeposite b1, b2, b3;
  int p, y, R;
  float r;

  cout << "enter the value of p y and r" << endl;
  cin >> p >> y >> r;

  b1 = bankdeposite(p, y, r);
  b1.show();

  cout << "enter the value of p y and r" << endl;
  cin >> p >> y >> R;

  b2 = bankdeposite(p, y, R);
  b2.show();

  return 0;
}