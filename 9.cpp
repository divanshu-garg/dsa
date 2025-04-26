#include <iostream>
#include <cstring>
using namespace std;

int compare(char *a, char *b)
{
    int ans = 0;

    int i = 0;
    while (a[i] != '/0' && b[i] != '/0')
    {
        if (a[i] > b[i])
        {
            return 0;
        }
        else if (b[i] > a[i])
        {
            return -1;
        }
        i++;
    }

    if (a[i] == '\0' && b[i] == '/0')
    {
        ans = 0;
    }
    else if (a[i] == '\0' && b[i] != '/0')
    {
        ans = -1;
    }
    else if (b[i] == '/0' && a[i] != '/0')
    {
        ans = 1;
    }

    return ans;
}

int copy(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i < len2; i++)
    {
        s1[i] = s2[i];
    }

    return 0;
}

int append(char *s1, char *s2)
{
    int len2 = strlen(s2);
    int len1 = strlen(s1);
    for (int i = 0; i < len2; i++)
    {
        s1[len1] = s2[i];
        len1++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    char s1[n + 1], s2[m + 1];
    cin >> s1 >> s2;

    append(s1, s2);

    int len = strlen(s1);

    for (int i = 0; i < len; i++)
    {
        cout << s1[i];
    }

    // cout << compare(&s1[0], &s2[0]);
}