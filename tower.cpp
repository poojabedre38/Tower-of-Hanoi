#include <iostream>
using namespace std;
void tower(int n, char source, char auxi, char dest) {
    if (n == 1) {
cout << "Move ring 1 from " << source << "to " << dest << endl;
return;
    }
    tower(n - 1, source, dest, auxi);
    cout << "Move ring " << n << " from " << source << " to " << dest << endl;
    tower(n - 1, auxi, source, dest);
}

int main() {
    int n;
    cout << "Enter number of rings: ";
    cin >> n;
    tower(n, 'A', 'B', 'C');
    return 0;
}
