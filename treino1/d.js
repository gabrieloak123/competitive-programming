var readline = require('readline');

var leitor = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

leitor.question("", function(string) {
    let novastring = '';

    for (i = 0; i < string.length; i++){
        if(string[i] != 'a'&& string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u'){
            novastring += string[i];
        }
    }
    console.log(novastring);
    leitor.close();
});