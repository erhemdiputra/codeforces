package main

import "fmt"

func main() {
	var weight int
	fmt.Scanf("%d\n", &weight)

	var isPossible bool
	for i := 2; i < weight; i += 2 {
		remainder := weight - i
		if remainder%2 == 0 {
			isPossible = true
		}
	}

	if isPossible {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
