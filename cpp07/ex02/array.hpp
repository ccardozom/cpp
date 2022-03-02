#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array{
    public:
        Array() : _size(0){
            this->_array = new T[_size];
        }

        Array(unsigned int n) : _size(n){
            this->_array = new T[n];
        }

        Array(Array &rhs){
            this->_array = new T[rhs._size];
            for (int i=0; i < rhs.size; i++)
                this->_array[i] = rhs._array[i];
        }

        ~Array(){
            delete [] this->_array;
        }

        Array &operator=(Array &rhs){
          
                delete [] this->_array;
                this->_array = new T[size];
            }
            for (int i=0; i < size; i++)
                this->_array[i] = rhs._array[i];
            return *this;
        }

        int size() const{

        }

        T const	&operator[](int idx) const{

        }

    private:
        T * _array;
        int _size;
};

#endif