package main

import(
	"fmt"
	"math/rand"
	"strings"
	"time"
)

func main()  {
	
	winner := rand.Intn(1 - 100) + 1
	fmt.Println("Guess the number between 1 and 100")
	fmt.Println("Input your guess: ")

	input = strings.TrimSuffix(input, "\n")

	if guess > winner {
		fmt.Println("Your guess is bigger than the secret number. Try again")
	} else if guess < winner {
		fmt.Println("Your guess is smaller than the secret number. Try again")
	} else {
		fmt.Println("Correct!")
	}
}