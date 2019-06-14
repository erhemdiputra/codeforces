package main

import (
	"fmt"
	"strings"
)

func main() {
	var str string
	fmt.Scanf("%s", &str)

	str = strings.Replace(str, "WUB", " ", -1)
	str = strings.TrimSpace(str)

	fmt.Printf("%s\n", str)
}
