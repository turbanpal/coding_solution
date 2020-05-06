#include<stdio.h>

#define MOD 1000000007
#define MAXN 200005

long long fast_int()
{
  static long long i;
  static char c;
  c = getchar_unlocked();
  while(c < '0' || c > '9')
    c = getchar_unlocked();
  for(i = 0; c >= '0' && c <= '9'; c = getchar_unlocked())
    i = (i << 3) + (i << 1) + (c - '0');
  return i;
}

int main()
{
  static long long ans, t, n, parent, group[MAXN], is_parent[MAXN], r[2];
  long long i, j;
  t = fast_int();
  while(t--){
    n = fast_int();
    for(i = 1; i <= n + 2; i++){
      is_parent[i] = 0;
      group[i] = 0;
    }
    fast_int(); // always 1

    r[0] = 1;
    r[1] = 1;
    group[2] = 1;
    ans = 1;


    for(i = 3; i <= (n + 1); i++)
    {
      parent = fast_int();
      group[i] = group[parent]? 0: 1;
      if(!is_parent[parent])
      {
        r[group[parent]]--;
        is_parent[parent] = 1;
      }
      r[group[i]]++;
      if(r[0] > r[1])
        ans += r[0];
      else
        ans += r[1];
    }
    printf("%lld\n", ans);
  }
}
