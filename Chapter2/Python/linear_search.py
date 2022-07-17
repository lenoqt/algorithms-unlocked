

from typing import Any


def linear_search(A: list[Any], x: int) -> tuple: 
    found = False 
    for idx, elem in enumerate(A):
        if elem == x and not found:
            found = True
            return (found, idx, elem)
    return (found, None, None)

if __name__ == "__main__":
    array = [1,2,3,4,5,6]
    result = linear_search(array, 4)
    print(result)
    bad_result = linear_search(array, 100)
    print(bad_result)
