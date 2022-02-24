#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n = 1;
    while (n) {
        string s; cin >> s; int number = s.length() - 1;  int game(1);
        if (s.length() == 1) {
            if (s == "*")n = 0;
            else cout << s << " is surprising.\n";
        }
       
        else {
            for (int i = 0; i < s.length() - 1; i++) {
                vector<string>sentence;
                int up = i + 1;
                if (game != 0) {
                    for (int j = 0; j < number; j++) {
                        string temp;
                        temp += s[j];
                        temp += s[up]; up++;
                        sentence.push_back(temp);
                    }
                    for (int j = 0; j < number - 1; j++) {
                        for (int k = j + 1; k < number; k++) {
                            if (sentence[j] == sentence[k]) {
                                game = 0;
                            }
                        }
                    }
                    number--;
                }
            }
            if (game == 0)cout << s << " is NOT surprising.\n";
            else cout << s << " is surprising.\n";
        }        
    }
}