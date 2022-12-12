import chalk from 'chalk';
import readLine from 'readline'

console.log(chalk.green(`Stringa verde`));
console.log(chalk.yellow(`Stringa gialla`));
console.log(chalk.gray(`Stringa griga`));

// Sei tentativi per risolverela parola

// La parola deve esserre lunga 4

const rl = readLine.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('Parola ', (answer) => {
    console.log(`Parola ${answer}`)
    rl.close();
});