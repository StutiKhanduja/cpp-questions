#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void printDuplicates(string str){

    sort(str.begin(), str.end());
    int i=0;
    int j=1;
    int count =0;
    while(j<str.length())
    {
        if(str[i]==str[j])
        {
            j++;
            count++;
        }
        i++;
        j++;
    }
        if(count > 1) {
            cout  << count << endl;
        }

}
  int main() {
    string str = "hello stuti";
    printDuplicates(str);
    return 0;
}
