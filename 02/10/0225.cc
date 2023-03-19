struct Base {
    virtual void Turing() = 0;
    virtual void Dijkstra() = 0;
    virtual void VNeumann(int g) = 0;
    virtual void DKnuth() const;
    void Print();
};

struct DerivedMid : public Base {
    // void VNeumann(double g);
};

struct DerivedTop : public DerivedMid {
    void Turing() override;
    // void Dikjstra() override;  // Compile error
    // void VNeumann(double g) override;  // Compile error
    // void DKnuth() override;  // Compile error
    // void Print() override;  // Compile error
};

int main() {
    // DerivedTop dt;  // Compile error

    return 0;
}
