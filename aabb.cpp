#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'substringCalculator' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts STRING s as parameter.
 */

long substringCalculator(string s) {
        string arr[100000];
        long i=0;
        int n =s.length();
         for(int l=0;l<n;l++){
             string s1=s;
             s1.erase(0,l);
            for(int r=0;r<n-l;r++){
             arr[i]=s1.erase((n-r-l),r);
             cout<<arr[i]<<endl;
             i++;
            }
        //  arr[i]=s1[l];
      //     cout<<arr[i]<<endl;
        //  i++;
        }

     /*   long res = 1;

    for (int k = 1; k < i; k++) {
        int m = 0;
        for (m = 0; m < k; m++)
            if (arr[k].compare(arr[m])==1)
                break;

        // If not printed earlier, then print it
        if (k == m)
            res++;
    } */
    return i;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long result = substringCalculator(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
