class Singleton {
private:
    static Singleton* instance;
    Singleton() {};

public:
    static Singleton* getInstance() {
        if (instance == 0)
        {
            instance = new Singleton();
        }

        return instance;
    }
};
