#include <iostream>
using namespace std;

void printRLE(string str,string& rleStr)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
 

        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        rleStr.insert(rleStr.end(),str[i-1]);
        rleStr.insert(rleStr.end(),(char)count);
       
        cout << str[i] << count;
    }
    cout << '\n' <<   rleStr << '\n';
}




int main()
{
    string str = "iiiiiiiiiiiexxxxxxywww";
    string rleStr;
    printRLE(str,rleStr);
    return 0;
}
