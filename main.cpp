#include <bits/stdc++.h>
using namespace std;
int browse(string url)
{
  //put your code here
}
bool catcore(int InT)
{
  unsigned int UINT=InT;
  switch(UINT)
  {
    case 1:
      return 1;
      break;
    case 2:
      return 2;
      break;
    default:
      break;
  }
  if(UINT>0)
  {
    return UINT;
  }
}
int main()
{
  catcore(browse("develop://cat-browser/"));
  return 0;
}
