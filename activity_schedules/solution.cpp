#include <iostream>
#include <vector>
using namespace std;
vector<string> activities = { "Swimming", "Running", "Football" };
vector<string> schedule;
int  c = 0;
void schdl(int day, int n) {
    if (day == n) {
        for (int i = 0; i < n; i++) {
            cout << schedule[i];
            if (i != n - 1) cout << " ";  
        }
        cout << endl;
        c++;
        return;
    }
    for (string activity : activities) {
        if (day == 0 || activity != schedule[day - 1]) {
            schedule.push_back(activity);         
            schdl(day + 1, n);   
            schedule.pop_back();                   
        }
    }
}
int main() {
    int n;
    cin >> n;
    schdl(0, n);
    cout << "COUNT: " << c << endl;
   
}

