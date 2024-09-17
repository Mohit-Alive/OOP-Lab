#include <iostream>
using namespace std;
 
class Sum{
  string str;
  
  public:
    Sum(string s){
      str = s;
    }
    
    Sum operator+(const Sum& other) const{
      return Sum(str + other.str);
    }
    
    friend ostream& operator<<(ostream& out, const Sum& s){
      return out<<s.str;
    }
};
 
int main() {
  Sum str1("Hi!, ");
  Sum str2("Hello!");
  Sum result = str1 + str2;
  
  cout<<result;
 
  return 0;
}