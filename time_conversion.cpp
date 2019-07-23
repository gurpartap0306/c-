#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */

    string d;
    string str;
    str = s.substr(0,2);
    size_t sz;
    int a=stoi(str,&sz);
    string str2=s.substr(8,9);

    if(str2[0]=='P'){

        if(a==12)
            d=s.substr(0,8);

        else{
            a=a+12;
            string b =to_string(a);
            string c=s.substr(2,6);
            d=b+c;
            }
        }

        else{
            if(a==12){
                a=a-12;
                string b =to_string(a);
                b=b+'0';
                string c=s.substr(2,6);
                d=b+c;
            }
            else
                d=s.substr(0,8);
     }
    return d;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
