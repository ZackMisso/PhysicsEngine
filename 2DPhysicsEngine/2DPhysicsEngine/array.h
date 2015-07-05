//
//  array.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__array__
#define ___DPhysicsEngine__array__

// I am implementing my own array class because I want the experiance of using templates
// in C++. I know fully well using the STD vector class already implements all of the
// functionality in this class.

template <class T>
class Array{
private:
    T* values;
    int length;
    int currentSize;
    
    void grow(){
        length <<= 1;
        T* newValues = new T[length];
        for(int i = 0; i < currentSize; i++){
            newValues[i] = values[i];
            values[i] = nullptr;
        }
        for(int i = currentSize; i < length; i++)
            newValues[i] = nullptr;
        delete values;
        values = newValues;
    }
    
    void shrink(){
        length >>= 1;
        T* newValues = new T[length];
        for(int i = 0; i < currentSize; i++){
            newValues[i] = values[i];
            values[i] = nullptr;
        }
        for(int i = currentSize; i < length; i++)
            newValues[i] = nullptr;
        delete values;
        values = newValues;
    }
    
public:
    Array(){
        values = new T[5];
        length = 5;
        currentSize = 0;
        for(int i = 0; i < length; i++)
            values[i] = nullptr;
    }
    
    Array(int len){
        currentSize = 0;
        if(len > 5){
            values = new T[len];
            length = len;
        }
        else{
            values = new T[5];
            length = 5;
        }
        for(int i = 0; i < length; i++)
            values[i] = nullptr;
    }
    
    ~Array(){
        delete values;
    }
    
    int size(){
        return currentSize;
    }
    
    T get(int index){
        return values[index];
    }
    
    T set(int index,T val){
        T temp = values[index];
        values[index] = val;
        return temp;
    }
    
    void add(T val){
        values[currentSize] = val;
        currentSize++;
        if(currentSize > length-2)
            grow();
    }
    
    T remove(int index){
        if(index > currentSize || index < 0)
            return nullptr;
        T temp = values[index];
        for(int f = index + 1; f < currentSize; f++)
            values[f-1] = values[f];
        currentSize--;
        values[currentSize] = nullptr;
        if(currentSize < length>>2 && length > 5)
            shrink();
        return temp;
    }
    
    T remove(T val){
        for(int i = 0; i < currentSize; i++)
            if(values[i] == val){
                for(int f = i + 1; f < currentSize; f++)
                    values[f-1] = values[f];
                currentSize--;
                values[currentSize] = nullptr;
                if(currentSize < length>>2 && length > 5)
                    shrink();
                return val;
            }
        return nullptr;
    }
};

#endif /* defined(___DPhysicsEngine__array__) */
