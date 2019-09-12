class ElectricFan {

    bool bPower;

public:
    ElectricFan();

    const char* getStateString() const;

    void pushSwitch();
};
