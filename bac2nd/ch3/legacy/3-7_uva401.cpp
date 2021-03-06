#include<cstdio>
#include<cstring>
#include<cctype>

const int maxn = 1000;

const char* g_alpha = "A   3  HIL JM O   2TUVWXY5";
const char* g_digit = "1SE Z  8 ";

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva401.in", "r", stdin);
  #endif
  char str[maxn];
  while(scanf("%s", str) == 1) {
    bool is_palin = true, is_mirror = true;
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
      if(str[i] != str[len-i-1]) {
        is_palin = false;
        break;
      }
    }
    for(int i = 0; i < len; i++) {
      if(isalpha(str[i]) && str[len-i-1] != g_alpha[str[i]-'A']) {
        is_mirror = false;
        break;
      } else if(isdigit(str[i]) && str[len-i-1] != g_digit[str[i]-'1']) {
        is_mirror = false;
        break;
      }
    }
    if(is_palin && is_mirror)
      printf("%s -- is a mirrored palindrome.\n\n", str);
    if(is_palin && !is_mirror)
      printf("%s -- is a regular palindrome.\n\n", str);
    if(!is_palin && is_mirror)
      printf("%s -- is a mirrored string.\n\n", str);
    if(!is_palin && !is_mirror)
      printf("%s -- is not a palindrome.\n\n", str);
  }
  return 0;
}
