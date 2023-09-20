class Solution
{
  public:
     vector< int > rotate( int n, int d ) {
    return d %= 16, vector< int >{
        ( n << d | n >> 16-d ) & 65535,
        ( n >> d | n << 16-d ) & 65535 };
}
};