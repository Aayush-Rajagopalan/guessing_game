//Made by Ahmed Baari

const readline = require("readline"); //For doing stuff in your terminal

const rl = readline.createInterface({
  input: process.stdin, //keyboard 
  output: process.stdout, //monitor 
});

rl.question("Enter a number: ", function (answer) {
  var winner;
  winner = parseInt(Math.random() * (10 - 1)); //Generates a random number between 1 and 10. The parseint makes it an integer
  number = parseInt(answer); //Converts the string answer to an integer

  if (winner === number)
    console.log("Berry loves you! number was ", winner) && rl.close();
  else console.log("Die! number was ", winner) && rl.close(); //Closes the interface
});
