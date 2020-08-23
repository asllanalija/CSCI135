#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;

string encode(string s, int r){

  char c;
  string result = "";
  
  for (unsigned i = 0; i < s.length(); ++i) {
    c = s[i];
    if (c >= 'a' && c <= 'z'){
      c = c - 'a';
      c = (c+r)%26;
      c = c + 'a';
    }
    else if (c >= 'A' && c <= 'Z'){
      c = c - 'A';
      c = (c+r)%26;
      c = c + 'A';
    }

    result = result + c;
  }

  return result;
  
}

double distance(double a[], double b[], int len)
{
    double sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = sum + (b[i]-a[i]) * (b[i]-a[i]);
    }

    return sqrt(sum);
}


int main(int argc, char *argv[])
{
  string source = "Attack each day with an enthusiasm unknown to mankind!";
  string encoded = encode(source,3);
  string decoded;
  cout << source << "\n------------\n\n";
  cout << encoded << "\n";

  cout << "\n";

  double a[] = {0, 0};
  double b[] = {5, 5};

  cout << distance(a, b, 2) << endl;

  return 0;
}
