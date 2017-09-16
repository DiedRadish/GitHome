class any {
};

template <typename T>
class anytype : any {
    T d;
public:
    anytype(T data) {
        d = data;
    }
};

class var {
    any* data;
public:
    void clear() {
        if(data) {
           delete data;
        }

    }
    template<typename T> var(T d) {
        clear();
        data = new anytype<T>(d);
    }
    template<typename T> var& operator = (T d) {
        clear();
        data = new anytype<T>(d);
    }

    ~var() {
        clear();
    }
};
