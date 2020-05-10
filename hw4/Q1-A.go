package main

import (
	"fmt"
	"time"
)

func test(from string) {
	for i := 0; i < 5; i++ {
		fmt.Println(from, ":", i)
	}
}
func main() {
	test("thread1")
	go test("gothread")
	go func(msg string) {
		fmt.Println(msg)
	}("closing thread")
	time.Sleep(time.Second)
	fmt.Println("done threads")
}
