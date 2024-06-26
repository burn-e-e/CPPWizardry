#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main() {
    vector<string> foods = {"grapes", "carrots","lemmons"};
    for(auto food : foods) {
        cout<<food<<endl;
    }
    system("pause");
    return 0;
}
