package main

import "fmt"

type result struct {
	found   bool
	index   int
	element int
}

func linearSearch(array []int, x int) result {
	var found bool
	for idx, elem := range array {
		if elem == x && !found {
			found = true
			return result{
				found,
				idx,
				elem,
			}
		}
	}
	return result{}
}

func main() {
	array := []int{1, 2, 3, 4, 5, 6}
	result := linearSearch(array, 6)
	fmt.Println(result)
	badResult := linearSearch(array, 1000)
	fmt.Println(badResult)
}
