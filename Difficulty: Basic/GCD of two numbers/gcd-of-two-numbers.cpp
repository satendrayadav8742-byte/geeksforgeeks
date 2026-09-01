class Solution {
  public:
    int Gcd(int a,int b)
    {
        if(b==0)
        return a;
         return Gcd(b,a%b);
    }
    int gcd(int a, int b) {
        Gcd(a,b);
    }
};
