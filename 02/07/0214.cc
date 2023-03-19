class Init {
public:
    Init() : a(0) {
    }
    Init(int d) : a(d) {
    }
private:
    int a;
    const static int b = 0;
    // int c = 1;  // Compile error in c++98
    // static int d = 0;  // Compiler error in c++98
    // static const double e = 1.3;  // Compile error in c++98
    // static const char *const f = "e";  // Compile error in c++98
};

int main() {

    return 0;
}
