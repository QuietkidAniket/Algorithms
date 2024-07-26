#include <iostream>
#include <sstream>
#include <algorithm>

template<typename T>
class dynamic_array{
    T* data;
    size_t n;
    public:
    dynamic_array(int n){
        this->n = n;
        data = new T[n];
    }
    dynamic_array(const dynamic_array<T>& other){
        this->n = other.n;
        data = new T[n];
        for(int i = 0; i < n; i++){
            data[i] = other[i];
        }
    }
    dynamic_array<T>& operator=(const dynamic_array<T>& other){
        if(this!= &other){
            delete[] data;
            n = other.n;
            data = new T[n];
            for(int i = 0; i < n; i++){
                data[i] = other[i];
            }
        }
        return *this;
    }
    T& operator[](int index){
        return data[index];
    }
    const T& operator[](int index) const {
        return data[index];
    }
    T& at(int index)
    {
        if(index < 0 || index >= n){
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
    size_t size() const{
        return n;
    }
    ~dynamic_array(){
        delete[] data;
    }

};


int main(){
}
