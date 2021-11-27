#include <bits/stdc++.h>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/140

using namespace std;

string A,B;

string process() {
    if (A==B) return "DRAW";
    else {
        if (A=="KEO") {
            if (B=="BUA") return "B WON";
            else return "A WON";
        }
        if (A=="BUA") {
            if (B=="BAO") return "B WON";
            else return "A WON";
        }
        if (A=="BAO") {
            if (B=="KEO") return "B WON";
            else return "A WON";

        }
    }
}

int main()
{
    cin>>A>>B;
    cout<<process();
    return 0;
}
