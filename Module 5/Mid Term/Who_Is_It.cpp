/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/who-is-it-4/submissions/code/1370590568
*/

#include<bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define c child
#define vec vector
#define mat matrix
#define ll long long
#define pi pair
using namespace std;
struct student
{
    int ID;
    string Name;
    char Section;
    int TotalMarks;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        student s[3];
        int maxMark=0;
        int maxID=1;
        for(int i=0; i<3; i++)
        {
            cin>>s[i].ID>>s[i].Name>>s[i].Section>>s[i].TotalMarks;
            if(s[i].TotalMarks>maxMark)
            {
                maxMark =s[i].TotalMarks;
                maxID=s[i].ID;
            }
            else if(s[i].TotalMarks==maxMark && s[i].ID < maxID)
            {
                maxID=s[i].ID;
            }

        }
        for(int i=0; i<3; i++)
        {
            if(s[i].ID==maxID)
            {
                cout<<s[i].ID<<" "<<s[i].Name<<" "<<s[i].Section<<" "<<s[i].TotalMarks<<endl;
                break;
            }
        }
    }
    return 0;
}