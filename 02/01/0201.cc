#include <iostream>

using namespace std;

int main() {
    cout << "Standard CLib: " << __STDC_HOSTED__ << endl;
    cout << "Standard C: " << __STDC__ << endl;
#ifdef __STDC_VERSION__
    cout << "C Standard Version: " << __STDC_VERSION__ << endl;
#endif
    cout << "ISO/IEC: " << __STDC_ISO_10646__ << endl;

    return 0;
}
