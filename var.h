
class any {
};

template <typename T>
class anytype : public any {
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
    var() {
    };
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
