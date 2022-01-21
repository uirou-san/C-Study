#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    string s;
    s = "を2倍した数は、";
    cout << "数値を入力してください:";
    cin >> a;
    cout << a << s << a*2 << "です。" << endl;
    return 0;
}