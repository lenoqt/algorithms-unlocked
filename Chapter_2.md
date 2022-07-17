# Arrays 

Arrays in computers aggregates data of the same type *Depending on the language* into one entity.
 An array can be think of a table with given __index__ of an __entry__.

#### Array Example 

| Index  | Items  |
| ------ |:------:|
| 0      | Item 1 |
| 1      | Item 2 |
| 2      | Item 3 |
| 3      | Item 4 |
| 4      | Item 5 |

An item on the array index 2 is *Item 3*. This is think of a single entity and not five separate 
entities. An array the indices are consecutive numbers that can start anywhere, usually starts at 
0 or 1. Given the name of an array and an index into the array, we combine them with the square 
brackets to indicate a particular array element. For example we denote the **i**th element of an 
array **A** by **A[i]**. 

Arrays have one other important characteristic: it takes equally long to access any element of an 
array. Once you give an index **i** into an array, it can access the **i**th element as quickly as 
it can access the first element, regardless of the value of *i* 

A searching algorithm for a particular value in a given array, we want to know which entry in the 
array, if any, holds a given value. 

We start at the left end of the array and look for the leftmost value, if the value matches, we return 
the value, if not, we continue with the next item in the array and keep going to the right, 
examining value by value until either the value matches or we run off the right-hand end of the 
array and if not found we can conclude the value isn't on the array.

As general problem, we are given an array **A** of **n** elements and we want to find whether a value 
**x** is present in the array **A**. If it is, then we want to determine an index **i** such that 
**A[i] = x** (the **i**th position on the array that holds the value). This algorithm also assumes
that the values on array **A** are distinct. We also need some way to indicate that the value **x** 
is not present in the array **A**. 


_Procedure_ LINEAR-SEARCH(A, n, x)

_Inputs:_

* _A_: an array. 
* _n_: the number of elements in **A** to search through.
* _x_: the value being searched for. 

_Output:_ Either an index _i_ for which _A[i] = x_, or the special value **NOT-FOUND**, 
which could be any invalid index into the array, such as 0 or any negative integer. 

1. Set **answer** to **NOT-FOUND**
2. For each index _i_, going from 1 to _n_, in order: 
   * A. If _A[i] = x_, then set **answer** to the value _i_
3. Return the value _answer_ as the output. 
