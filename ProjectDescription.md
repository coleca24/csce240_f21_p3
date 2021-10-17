# Project 3 CSCE 240 Fall 2021 (50 points)
Due 10/28/21 at Midnight

In this assignment, you will be extending the ArrayList object that we have been creating in class with some more operators overloads. You will start from the templated ArrayList that we created together in class. Remember that the T is the data type. 
  
## ArrayList member variables
- `T *data`: a dynamic pointer array that holds each element of type T in the ArrayList
- `int size`: the size of the `data` array (how many elements it holds)

## ArrayList Methods
Notice that you will not need to implement the constructors or some of the other functions (they are already implemented).

The following are the methods that you will need to implement: 
- `bool operator!=(const ArrayList<T> &) const`
  - Checks to see if the calling object and the passed object are different
  - 
- `ArrayList<T> operator+(T) const`                     - 5 points
- `ArrayList<T> operator+(const ArrayList<T> &) const`  - 5 points
- `ArrayList<T> & operator--()`                         - 5 points
- `ArrayList<T> operator--(int)`                        - 5 points
- `void operator+=(T)`                                  - 5 points
- `void operator+=(ArrayList<T> &)`                     - 5 points
- `ArrayList<T> operator*(T) const`                     - 5 points
- `ArrayList<T> operator/(T) const`                     - 5 points

## Compiling and Running your Code
With Google Test
```
Windows WSL and Linux: 
g++ main-gtest.cpp ArrayList.cpp -lgtest -lpthread -o proj3
./proj3

Mac: 
g++ -std=c++2a main-gtest.cpp ArrayList.cpp -lgtest -lpthread -o proj3
./proj3
```

Without Google Test
```
Windows WSL and Linux: 
g++ main.cpp ArrayList.cpp -o proj3
./proj3

Mac: 
g++ -std=c++2a main.cpp ArrayList.cpp -o proj3 
./proj3
```

## Submitting your Code to GitHub
Feel free to modify the `main.cpp`, `ArrayList.h`, `ArrayList.cpp`. Any changes that you make to these, you should push up to GitHub: 
```
git pull 
git add <files> // For example, git add ArrayList.h ArrayList.cpp
git commit -m "Changes..."
git push 
```

## Grading Rubric

- `bool operator!=(const ArrayList<T> &) const`         - 5 points
- `ArrayList<T> operator+(T) const`                     - 5 points
- `ArrayList<T> operator+(const ArrayList<T> &) const`  - 5 points
- `ArrayList<T> & operator--()`                         - 5 points
- `ArrayList<T> operator--(int)`                        - 5 points
- `void operator+=(T)`                                  - 5 points
- `void operator+=(ArrayList<T> &)`                     - 5 points
- `ArrayList<T> operator*(T) const`                     - 5 points
- `ArrayList<T> operator/(T) const`                     - 5 points

5 points for no memory leaks and proper style (passes cpplint)
