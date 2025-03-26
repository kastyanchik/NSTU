package main

import "fmt"

func main() {
    vec := []int{1, 2, 3, 4, 5}
    for _, value := range vec {
        fmt.Print(value, " ")
    }
    fmt.Println()
}
